/********************************************************************************
** Form generated from reading UI file 'changepassword.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_changePassword
{
public:
    QPushButton *changePWDbtn;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *oldPWD;
    QLineEdit *newPWD1;
    QLineEdit *newPWD2;
    QPushButton *changePWD;

    void setupUi(QDialog *changePassword)
    {
        if (changePassword->objectName().isEmpty())
            changePassword->setObjectName(QString::fromUtf8("changePassword"));
        changePassword->resize(600, 400);
        changePWDbtn = new QPushButton(changePassword);
        changePWDbtn->setObjectName(QString::fromUtf8("changePWDbtn"));
        changePWDbtn->setGeometry(QRect(70, 320, 151, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(18);
        changePWDbtn->setFont(font);
        label = new QLabel(changePassword);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 80, 111, 51));
        label->setFont(font);
        label_2 = new QLabel(changePassword);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 150, 161, 51));
        label_2->setFont(font);
        label_3 = new QLabel(changePassword);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 190, 201, 91));
        label_3->setFont(font);
        label_4 = new QLabel(changePassword);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 30, 421, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(14);
        label_4->setFont(font1);
        oldPWD = new QLineEdit(changePassword);
        oldPWD->setObjectName(QString::fromUtf8("oldPWD"));
        oldPWD->setGeometry(QRect(240, 90, 301, 41));
        oldPWD->setFont(font1);
        newPWD1 = new QLineEdit(changePassword);
        newPWD1->setObjectName(QString::fromUtf8("newPWD1"));
        newPWD1->setGeometry(QRect(240, 210, 301, 41));
        newPWD1->setFont(font1);
        newPWD2 = new QLineEdit(changePassword);
        newPWD2->setObjectName(QString::fromUtf8("newPWD2"));
        newPWD2->setGeometry(QRect(240, 150, 301, 41));
        newPWD2->setFont(font1);
        changePWD = new QPushButton(changePassword);
        changePWD->setObjectName(QString::fromUtf8("changePWD"));
        changePWD->setGeometry(QRect(380, 320, 161, 51));
        changePWD->setFont(font);

        retranslateUi(changePassword);

        QMetaObject::connectSlotsByName(changePassword);
    } // setupUi

    void retranslateUi(QDialog *changePassword)
    {
        changePassword->setWindowTitle(QCoreApplication::translate("changePassword", "Dialog", nullptr));
        changePWDbtn->setText(QCoreApplication::translate("changePassword", "\346\233\264\346\224\271", nullptr));
        label->setText(QCoreApplication::translate("changePassword", "\346\227\247\345\257\206\347\240\201", nullptr));
        label_2->setText(QCoreApplication::translate("changePassword", "\346\226\260\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("changePassword", "\351\207\215\345\244\215\346\226\260\345\257\206\347\240\201", nullptr));
        label_4->setText(QCoreApplication::translate("changePassword", "\346\226\260\345\257\206\347\240\201\351\225\277\345\272\246\344\270\215\345\260\217\344\272\2166\344\275\215\357\274\214\344\270\215\345\205\201\350\256\2706\344\275\215\345\256\214\345\205\250\347\233\270\345\220\214", nullptr));
        changePWD->setText(QCoreApplication::translate("changePassword", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changePassword: public Ui_changePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
