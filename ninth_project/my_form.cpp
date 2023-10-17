#include "my_form.h"
#include "ui_my_form.h"

My_Form::My_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::My_Form)
{
    ui->setupUi(this);

    this->setWindowTitle("注册窗口");
}
My_Form::~My_Form()
{
    delete ui;
}

void My_Form::on_pushButton_2_clicked()
{
    emit back();
}

void My_Form::on_pushButton_clicked()
{
    if(ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty())
    {
        QMessageBox::warning(this, "警告", "账号和密码都不能为空！");
    }
    else
    {
        QString username = ui->lineEdit->text();
        QString password = ui->lineEdit_2->text();
        std::string stdusername = username.toStdString();
        std::string readtext;
        std::ifstream readfile;
        readfile.open("user.txt",std::ios::in);
        bool userflag = false;

        while(std::getline(readfile,readtext))
        {
            int index = readtext.find('#');
            std::string readusername = "";
            readusername = readtext.substr(0,index);
            if(readusername == stdusername)
            {
                userflag = true;
                QMessageBox::warning(this,"警告","该账号已注册！");
                ui->lineEdit->clear();
                ui->lineEdit_2->clear();
            }
        }
        readfile.close();

        if(!userflag)
        {
            std::ofstream writefile;
            writefile.open("user.txt",std::ios::app);
            writefile<<username.toStdString()<<"#";
            writefile<<password.toStdString()<<std::endl;
            ui->lineEdit->clear();
            ui->lineEdit_2->clear();

            writefile.close();

            emit back();
        }

    }

}

