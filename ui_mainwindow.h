/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *exit;
    QPushButton *check;
    QPushButton *depoMoney;
    QPushButton *withdrawlM;
    QPushButton *pwdChange;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        exit = new QPushButton(centralwidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(570, 360, 221, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(18);
        exit->setFont(font);
        check = new QPushButton(centralwidget);
        check->setObjectName(QString::fromUtf8("check"));
        check->setGeometry(QRect(570, 60, 221, 81));
        check->setFont(font);
        depoMoney = new QPushButton(centralwidget);
        depoMoney->setObjectName(QString::fromUtf8("depoMoney"));
        depoMoney->setGeometry(QRect(570, 210, 221, 81));
        depoMoney->setFont(font);
        withdrawlM = new QPushButton(centralwidget);
        withdrawlM->setObjectName(QString::fromUtf8("withdrawlM"));
        withdrawlM->setGeometry(QRect(30, 340, 221, 81));
        withdrawlM->setFont(font);
        pwdChange = new QPushButton(centralwidget);
        pwdChange->setObjectName(QString::fromUtf8("pwdChange"));
        pwdChange->setGeometry(QRect(30, 210, 221, 81));
        pwdChange->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 150, 191, 191));
        label->setPixmap(QPixmap(QString::fromUtf8(":/list_icon_atm.png")));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        check->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\344\275\231\351\242\235", nullptr));
        depoMoney->setText(QCoreApplication::translate("MainWindow", "\345\255\230\346\254\276", nullptr));
        withdrawlM->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\254\276", nullptr));
        pwdChange->setText(QCoreApplication::translate("MainWindow", "\346\233\264\346\224\271\345\257\206\347\240\201", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
