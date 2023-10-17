#include "my_widget.h"
#include "ui_my_widget.h"

My_Widget::My_Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::My_Widget)
{
    ui->setupUi(this);

    this->setWindowTitle("越雄编辑器");

    this->setFixedSize(510,370);

    f = new My_MainWindow;
//    connect(ui->pushButton,&QPushButton::clicked,this,[=](){
//        this->hide();
//        this->f->show();
//    });

    connect(this->f,&My_MainWindow::backToSignIn,this,[=](){
        this->f->hide();
        this->show();
    });

    f2 = new My_Form;
    connect(ui->pushButton_3,&QPushButton::clicked,this,[=](){
        this->hide();
        this->f2->show();
    });

    connect(this->f2,&My_Form::back,this,[=](){
        this->f2->hide();
        this->show();
    });

    ui->lineEdit_2->setEchoMode(QLineEdit::Password);

    connect(ui->pushButton_2,&QPushButton::clicked,this,&QWidget::close);
}

My_Widget::~My_Widget()
{
    delete ui;
}


void My_Widget::on_pushButton_clicked()
{
    QString quser = ui->lineEdit->text();
    QString qpassword = ui->lineEdit_2->text();

    std::string user = quser.toStdString();
    std::string password = qpassword.toStdString();

    if(quser.isEmpty() || qpassword.isEmpty())//账号或者密码有空
    {
        QMessageBox::warning(this,"警告","账号和密码不能为空！");
    }
    else
    {
        std::ifstream readfile;
        std::string readtext;

        bool userflag = false;

        readfile.open("user.txt",std::ios::in);
        while(std::getline(readfile,readtext))
        {
            std::string readuser = "";
            std::string readpassword = "";
            int index = readtext.find('#');
            readuser = readtext.substr(0,index);
            readpassword = readtext.substr(index+1);
            if(user == readuser)
            {
                userflag = true;
                if(password == readpassword)
                {
                    ui->lineEdit->clear();
                    ui->lineEdit_2->clear();
                    this->hide();
                    this->f->show();
                }
                else
                {
                    QMessageBox::warning(this,"警告","密码错误！");
                    ui->lineEdit_2->clear();
                }
            }
        }

        if(!userflag)
        {
            QMessageBox::warning(this,"警告","您尚未注册或者账号输入错误！");
            ui->lineEdit->clear();
            ui->lineEdit_2->clear();
        }
        readfile.close();
    }
}

