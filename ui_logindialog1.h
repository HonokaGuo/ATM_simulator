/********************************************************************************
** Form generated from reading UI file 'logindialog1.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG1_H
#define UI_LOGINDIALOG1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog1
{
public:
    QPushButton *loginBtn;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *pwdLineEdit;
    QLineEdit *userNameLineEdit;

    void setupUi(QDialog *LoginDialog1)
    {
        if (LoginDialog1->objectName().isEmpty())
            LoginDialog1->setObjectName(QString::fromUtf8("LoginDialog1"));
        LoginDialog1->resize(500, 400);
        loginBtn = new QPushButton(LoginDialog1);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(140, 260, 201, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(18);
        loginBtn->setFont(font);
        label = new QLabel(LoginDialog1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 110, 71, 31));
        label->setFont(font);
        label_2 = new QLabel(LoginDialog1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 180, 81, 41));
        label_2->setFont(font);
        pwdLineEdit = new QLineEdit(LoginDialog1);
        pwdLineEdit->setObjectName(QString::fromUtf8("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(170, 180, 291, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(14);
        pwdLineEdit->setFont(font1);
        pwdLineEdit->setEchoMode(QLineEdit::Password);
        userNameLineEdit = new QLineEdit(LoginDialog1);
        userNameLineEdit->setObjectName(QString::fromUtf8("userNameLineEdit"));
        userNameLineEdit->setGeometry(QRect(170, 100, 291, 51));
        userNameLineEdit->setFont(font1);

        retranslateUi(LoginDialog1);

        QMetaObject::connectSlotsByName(LoginDialog1);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog1)
    {
        LoginDialog1->setWindowTitle(QCoreApplication::translate("LoginDialog1", "Dialog", nullptr));
        loginBtn->setText(QCoreApplication::translate("LoginDialog1", "\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog1", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("LoginDialog1", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog1: public Ui_LoginDialog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG1_H
