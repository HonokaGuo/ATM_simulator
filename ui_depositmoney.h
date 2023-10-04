/********************************************************************************
** Form generated from reading UI file 'depositmoney.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSITMONEY_H
#define UI_DEPOSITMONEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_depositMoney
{
public:
    QPushButton *pushDepo;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *depoBack;

    void setupUi(QDialog *depositMoney)
    {
        if (depositMoney->objectName().isEmpty())
            depositMoney->setObjectName(QString::fromUtf8("depositMoney"));
        depositMoney->resize(500, 400);
        pushDepo = new QPushButton(depositMoney);
        pushDepo->setObjectName(QString::fromUtf8("pushDepo"));
        pushDepo->setGeometry(QRect(50, 290, 171, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(18);
        pushDepo->setFont(font);
        lineEdit = new QLineEdit(depositMoney);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(200, 130, 251, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(14);
        lineEdit->setFont(font1);
        label = new QLabel(depositMoney);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 110, 181, 81));
        label->setFont(font);
        depoBack = new QPushButton(depositMoney);
        depoBack->setObjectName(QString::fromUtf8("depoBack"));
        depoBack->setGeometry(QRect(270, 290, 181, 61));
        depoBack->setFont(font);

        retranslateUi(depositMoney);

        QMetaObject::connectSlotsByName(depositMoney);
    } // setupUi

    void retranslateUi(QDialog *depositMoney)
    {
        depositMoney->setWindowTitle(QCoreApplication::translate("depositMoney", "Dialog", nullptr));
        pushDepo->setText(QCoreApplication::translate("depositMoney", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("depositMoney", "\345\255\230\346\254\276\351\207\221\351\242\235", nullptr));
        depoBack->setText(QCoreApplication::translate("depositMoney", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class depositMoney: public Ui_depositMoney {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSITMONEY_H
