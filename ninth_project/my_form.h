#ifndef MY_FORM_H
#define MY_FORM_H

#include <QWidget>
#include <QDebug>
#include <fstream>
#include <QMessageBox>
#include <string>

namespace Ui {
class My_Form;
}

class My_Form : public QWidget
{
    Q_OBJECT

public:
    explicit My_Form(QWidget *parent = nullptr);
    ~My_Form();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::My_Form *ui;


signals:
    void back();
};

#endif // MY_FORM_H
