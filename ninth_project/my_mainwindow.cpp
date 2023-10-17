#include "my_mainwindow.h"
#include "ui_my_mainwindow.h"

My_MainWindow::My_MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::My_MainWindow)
{
    ui->setupUi(this);

    this->setFixedSize(800,500);

    QPixmap pix;
    pix.load(":/image/file_flag");
    ui->actiondakaiwenjian->setIcon(QIcon(pix));

}

My_MainWindow::~My_MainWindow()
{
    delete ui;
}

void My_MainWindow::on_actiondakaiwenjian_triggered()
{
    QString filepath = QFileDialog::getOpenFileName(this,"打开文件","./","Text(*.txt)");
    std::ifstream readfile;
    std::string textline;
    readfile.open(filepath.toStdString(),std::ios::in);
    while(std::getline(readfile,textline))
    {
        QString readline = QString::fromStdString(textline);
        ui->textEdit->append(readline);
    }

}


void My_MainWindow::on_actiontuichu_triggered()
{
    emit backToSignIn();
}


void My_MainWindow::on_actionbaocunwenjian_triggered()
{
    QString my_putin = ui->textEdit->toPlainText();
    std::string my_input = my_putin.toStdString();
}


void My_MainWindow::on_actionshezhiziti_triggered()//设置字体大小
{
    bool ok;
    //QFont font = ui->textEdit->font();
    //QFont target_font = QFontDialog::getFont(&ok,font,this);
    QFont target_font = QFontDialog::getFont(&ok,this);
    if(ok)
    {
        ui->textEdit->setFont(target_font);
    }

}


void My_MainWindow::on_actionshezhi_triggered()//设置字体颜色
{
    QPalette pal = ui->textEdit->palette();//用来接收现在编辑器的调色盘
    QColor nowcolor = pal.color(QPalette::Text);//获取当前编辑器字体颜色
    QColor target_color = QColorDialog::getColor(nowcolor,this,"选择颜色");
    if(target_color.isValid())
    {
        pal.setColor(QPalette::Text,target_color);
        ui->textEdit->setPalette(pal);
    }
}

