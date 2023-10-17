#ifndef MY_MAINWINDOW_H
#define MY_MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <fstream>
#include <QPushButton>
#include <QPalette>
#include <QColorDialog>
#include <QFontDialog>

namespace Ui {
class My_MainWindow;
}

class My_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit My_MainWindow(QWidget *parent = nullptr);
    ~My_MainWindow();

private slots:
    void on_actiondakaiwenjian_triggered();

    void on_actiontuichu_triggered();

    void on_actionbaocunwenjian_triggered();

    void on_actionshezhiziti_triggered();

    void on_actionshezhi_triggered();

private:
    Ui::My_MainWindow *ui;

signals:
    void backToSignIn();
};

#endif // MY_MAINWINDOW_H
