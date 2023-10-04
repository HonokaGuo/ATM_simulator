#include "mainwindow.h"
#include "logindialog1.h"
#include "data.h"
#include <QApplication>
#include "QDialog"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QString cardNumber;
    LoginDialog1 login;
    login.setWindowTitle("登录");
    login.setWindowIcon(QIcon(":/icon2.ico"));
    if (login.exec() == QDialog::Accepted) {
        w.show();
        w.setWindowTitle("ATM");
        w.setWindowIcon(QIcon(":/icon.ico"));
        return a.exec();
    } else {
        return 0;
    }

}
