/********************************************************************************
** Form generated from reading UI file 'my_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MY_MAINWINDOW_H
#define UI_MY_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_My_MainWindow
{
public:
    QAction *actiondakaiwenjian;
    QAction *actionguanbiwenjian;
    QAction *actionshezhiziti;
    QAction *actionshezhi;
    QAction *actiontuichu;
    QAction *actionbaocunwenjian;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *My_MainWindow)
    {
        if (My_MainWindow->objectName().isEmpty())
            My_MainWindow->setObjectName("My_MainWindow");
        My_MainWindow->resize(800, 600);
        actiondakaiwenjian = new QAction(My_MainWindow);
        actiondakaiwenjian->setObjectName("actiondakaiwenjian");
        actionguanbiwenjian = new QAction(My_MainWindow);
        actionguanbiwenjian->setObjectName("actionguanbiwenjian");
        actionshezhiziti = new QAction(My_MainWindow);
        actionshezhiziti->setObjectName("actionshezhiziti");
        actionshezhi = new QAction(My_MainWindow);
        actionshezhi->setObjectName("actionshezhi");
        actiontuichu = new QAction(My_MainWindow);
        actiontuichu->setObjectName("actiontuichu");
        actionbaocunwenjian = new QAction(My_MainWindow);
        actionbaocunwenjian->setObjectName("actionbaocunwenjian");
        centralwidget = new QWidget(My_MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(430, 20, 351, 411));
        My_MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(My_MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName("menu_3");
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName("menu_4");
        My_MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(My_MainWindow);
        statusbar->setObjectName("statusbar");
        My_MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menu->addAction(actiondakaiwenjian);
        menu->addAction(actionguanbiwenjian);
        menu->addAction(actionbaocunwenjian);
        menu_2->addAction(actionshezhiziti);
        menu_2->addAction(actionshezhi);
        menu_4->addAction(actiontuichu);

        retranslateUi(My_MainWindow);

        QMetaObject::connectSlotsByName(My_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *My_MainWindow)
    {
        My_MainWindow->setWindowTitle(QCoreApplication::translate("My_MainWindow", "MainWindow", nullptr));
        actiondakaiwenjian->setText(QCoreApplication::translate("My_MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        actionguanbiwenjian->setText(QCoreApplication::translate("My_MainWindow", "\345\205\263\351\227\255\346\226\207\344\273\266", nullptr));
        actionshezhiziti->setText(QCoreApplication::translate("My_MainWindow", "\350\256\276\347\275\256\345\255\227\344\275\223\345\244\247\345\260\217", nullptr));
        actionshezhi->setText(QCoreApplication::translate("My_MainWindow", "\350\256\276\347\275\256\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
        actiontuichu->setText(QCoreApplication::translate("My_MainWindow", "\351\200\200\345\207\272", nullptr));
        actionbaocunwenjian->setText(QCoreApplication::translate("My_MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
        menu->setTitle(QCoreApplication::translate("My_MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("My_MainWindow", "\347\274\226\350\276\221", nullptr));
        menu_3->setTitle(QCoreApplication::translate("My_MainWindow", "\345\270\256\345\212\251", nullptr));
        menu_4->setTitle(QCoreApplication::translate("My_MainWindow", "\345\205\266\344\273\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class My_MainWindow: public Ui_My_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MY_MAINWINDOW_H
