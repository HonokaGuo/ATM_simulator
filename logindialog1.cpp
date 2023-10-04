#include "logindialog1.h"
#include "ui_logindialog1.h"
#include "data.h"
#include <QMessageBox>
#include <QSound>
#include <QDebug>

data publicData;  //为了使用data中方法
LoginDialog1::LoginDialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog1)
{
    ui->setupUi(this);
}

LoginDialog1::~LoginDialog1()
{
    delete ui;
}

void LoginDialog1::on_loginBtn_clicked()
{
    QString pwd = ui->pwdLineEdit->text();
    QString userName = ui->userNameLineEdit->text();
    QSound::play(":/atm.wav");
    publicData.loadInfo();

    bool ret = publicData.search(userName);
    qDebug() << ret;

    if (ret)
    {
        Account user; //定位到可能的用户
        user.accountName = publicData.currentAccount.accountName;
        user.password = publicData.currentAccount.password;
        user.saving = publicData.currentAccount.saving;

        qDebug() << user.accountName << user.password;

        if (user.password == pwd)
        {
            QMessageBox::information(this, tr("登陆成功！"), tr("欢迎"), QMessageBox::Yes);
            publicData.saveInfo();
            accept();
        }
        else
        {
            QMessageBox::warning(this, tr("警告！"), tr("密码错误！"), QMessageBox::Yes);
        }
    } else {
         QMessageBox::warning(this, tr("警告！"), tr("账号不存在！"), QMessageBox::Yes);
    }
}
