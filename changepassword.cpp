#include "changepassword.h"
#include "ui_changepassword.h"
#include "QMessageBox"
#include "data.h"
#include "QDebug"

extern data publicData;
changePassword::changePassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changePassword)
{
    ui->setupUi(this);
}

changePassword::~changePassword()
{
    delete ui;
}

void changePassword::on_changePWDbtn_clicked()
{
    QString oldPWD = ui->oldPWD->text();
    QString newPWD1 = ui->newPWD1->text();
    QString newPWD2 = ui->newPWD2->text();
    qDebug() << oldPWD;
    qDebug() << newPWD1;
    qDebug() << newPWD2;
    if (newPWD1 == newPWD2) {
        if (newPWD1.size() == 6) {
            if (!countineSame(newPWD1)) {
               publicData.changePassword(oldPWD,newPWD1);
               ui->oldPWD->clear();
               ui->newPWD1->clear();
               ui->newPWD2->clear();
            }else {
             QMessageBox::warning(NULL, tr("警告！"), tr("密码不能6位重复！"));
            }
        } else {
         QMessageBox::warning(NULL, tr("警告！"), tr("密码必须为6位！"));
        }
    }else {
         QMessageBox::warning(NULL, tr("警告！"), tr("密码两次输入必须相同！"));
        }

}
bool changePassword::countineSame(QString pwd) {
    std::string PWD = pwd.toStdString();
    int i = 1;
    char temp = PWD[0];
    for (; i < (int) PWD.size(); i++) {
        if (PWD[i] != temp) {
            return 0;
        }
    }
    return 1;

}

void changePassword::on_changePWD_clicked()
{
    close();
}
