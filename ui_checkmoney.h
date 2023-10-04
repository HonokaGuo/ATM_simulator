/********************************************************************************
** Form generated from reading UI file 'checkmoney.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKMONEY_H
#define UI_CHECKMONEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_checkMoney
{
public:
    QLabel *label;
    QLabel *saving;
    QPushButton *backCheck;

    void setupUi(QDialog *checkMoney)
    {
        if (checkMoney->objectName().isEmpty())
            checkMoney->setObjectName(QString::fromUtf8("checkMoney"));
        checkMoney->resize(400, 300);
        label = new QLabel(checkMoney);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 90, 161, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(18);
        label->setFont(font);
        saving = new QLabel(checkMoney);
        saving->setObjectName(QString::fromUtf8("saving"));
        saving->setGeometry(QRect(200, 100, 151, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(18);
        saving->setFont(font1);
        backCheck = new QPushButton(checkMoney);
        backCheck->setObjectName(QString::fromUtf8("backCheck"));
        backCheck->setGeometry(QRect(219, 219, 121, 41));
        backCheck->setFont(font);

        retranslateUi(checkMoney);

        QMetaObject::connectSlotsByName(checkMoney);
    } // setupUi

    void retranslateUi(QDialog *checkMoney)
    {
        checkMoney->setWindowTitle(QCoreApplication::translate("checkMoney", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("checkMoney", "\345\275\223\345\211\215\344\275\231\351\242\235\357\274\232", nullptr));
        saving->setText(QCoreApplication::translate("checkMoney", "TextLabel", nullptr));
        backCheck->setText(QCoreApplication::translate("checkMoney", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class checkMoney: public Ui_checkMoney {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKMONEY_H
