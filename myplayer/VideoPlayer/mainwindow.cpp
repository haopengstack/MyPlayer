#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QFileDialog>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    player = new VideoPlayer;

    connect(player,SIGNAL(readOneFrame(QImage)),this,SLOT(slotgetFrame(QImage)));
    connect(player,SIGNAL(updateTime(long)),this,SLOT(slotUpdateTime(long)));
    connect(player,SIGNAL(stateChanged(VideoPlayer::State)),this,SLOT(slotStateChanged(VideoPlayer::State)));


    ui->horizontalSlider->setRange(0,100);

    connect(ui->horizontalSlider,SIGNAL(sliderMoved(int)),this,SLOT(slotValueChanged(int)));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(slotOpenBtnClicked()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(slotPlayBtnClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotgetFrame(QImage image)
{
    QPixmap pixmap = QPixmap::fromImage(image.scaled(ui->label->size(), Qt::KeepAspectRatio) );
    ui->label->setPixmap(pixmap);
}

void MainWindow::slotValueChanged(int value)
{
    qint64 v = (value/100.0)*player->totalTime();
    player->seek(v);
}

void MainWindow::slotUpdateTime(long time)
{
    double v = time*1000.0/player->totalTime()*100.0;
    ui->horizontalSlider->setValue(v);
}

void MainWindow::slotOpenBtnClicked()
{
    QString s = QFileDialog::getOpenFileName(
        this, "open file dialog",
            "/",//初始目录
         "Movie files (*.rmvb *.flv *.mp3 *.wmv *.wma);;All files (*)");
       if (!s.isEmpty())
    {
           ui->label->clear();
           player->setSource(s);
           qDebug()<<s<<player->totalTime()<<player->state()<<player->type();
           player->play();
    }
}

void MainWindow::slotPlayBtnClicked()
{
    if (player->state() == VideoPlayer::PlayingState)
    {
        player->pause();
    }
    else if (player->state() == VideoPlayer::PausedState)
    {
        player->play();
    }
}

void MainWindow::slotStateChanged(VideoPlayer::State state)
{
    if (state == VideoPlayer::PlayingState)
    {
        ui->pushButton_2->setEnabled(true);
        ui->pushButton_2->setText("暂停");
    }
    if (state == VideoPlayer::PausedState)
    {
        ui->pushButton_2->setText("播放");
    }
    if (state == VideoPlayer::StoppedState)
    {
        ui->pushButton_2->setEnabled(false);
        ui->pushButton_2->setText("播放");
    }

}
