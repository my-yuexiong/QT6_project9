#ifndef MY_WIDGET_H
#define MY_WIDGET_H

#include <QWidget>
#include <QLabel>
#include "my_mainwindow.h"
#include "my_form.h"
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui { class My_Widget; }
QT_END_NAMESPACE

class My_Widget : public QWidget
{
    Q_OBJECT

public:
    My_Widget(QWidget *parent = nullptr);
    ~My_Widget();

private slots:
    void on_pushButton_clicked();

private:
    Ui::My_Widget *ui;
    My_MainWindow *f;
    My_Form *f2;
};
#endif // MY_WIDGET_H
