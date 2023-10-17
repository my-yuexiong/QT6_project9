/********************************************************************************
** Form generated from reading UI file 'my_form.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MY_FORM_H
#define UI_MY_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_My_Form
{
public:
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *My_Form)
    {
        if (My_Form->objectName().isEmpty())
            My_Form->setObjectName("My_Form");
        My_Form->resize(400, 300);
        label_3 = new QLabel(My_Form);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(150, 60, 95, 30));
        QFont font;
        font.setPointSize(14);
        label_3->setFont(font);
        widget = new QWidget(My_Form);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(90, 110, 211, 27));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        widget1 = new QWidget(My_Form);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(90, 210, 214, 35));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font);

        horizontalLayout_3->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font);

        horizontalLayout_3->addWidget(pushButton_2);

        widget2 = new QWidget(My_Form);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(90, 160, 211, 27));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget2);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget2);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_2->addWidget(lineEdit_2);


        retranslateUi(My_Form);

        QMetaObject::connectSlotsByName(My_Form);
    } // setupUi

    void retranslateUi(QWidget *My_Form)
    {
        My_Form->setWindowTitle(QCoreApplication::translate("My_Form", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("My_Form", "\346\226\260\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("My_Form", "\346\263\250\345\206\214\350\264\246\345\217\267\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("My_Form", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("My_Form", "\350\277\224\345\233\236", nullptr));
        label_2->setText(QCoreApplication::translate("My_Form", "\350\256\276\347\275\256\345\257\206\347\240\201\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class My_Form: public Ui_My_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MY_FORM_H
