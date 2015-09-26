#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "videoplayer.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    

private:
    Ui::MainWindow *ui;

    VideoPlayer *player;
private slots:
    void slotgetFrame(QImage);
    void slotValueChanged(int);
    void slotUpdateTime(long time);
    void slotOpenBtnClicked();
    void slotPlayBtnClicked();
    void slotStateChanged(VideoPlayer::State);
};

#endif // MAINWINDOW_H
