#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <interface2.h>
#include <QDebug>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QImage>
#include <QPixmap>
#include <QCloseEvent>
#include <QMessageBox>
#include <QFile>

#include "opencv2/opencv.hpp"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *event);

private slots:

    void on_tbSource_clicked();

    void on_pbCompter_clicked();

    void on_pbAcquerir_clicked();

private:
    Ui::MainWindow *ui;
    Interface2 * Interface_2;
    static int numero ;
    QGraphicsPixmapItem pixmap;
    cv::VideoCapture video;

};

#endif // MAINWINDOW_H






/*
private slots:
    void on_startBtn_pressed();

    void on_startBtn_clicked();
*/


