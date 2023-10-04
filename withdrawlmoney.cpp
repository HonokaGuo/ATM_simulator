#include "withdrawlmoney.h"
#include "ui_withdrawlmoney.h"
#include "QMessageBox"
#include "data.h"
#include <QSound>
extern data publicData;
withdrawlMoney::withdrawlMoney(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::withdrawlMoney)
{
    ui->setupUi(this);
    Account user = *(publicData.myIterUser); //search完成后myIterUser存当前用户位置
    ui->saving->setText(QString::number(user.saving));
}

withdrawlMoney::~withdrawlMoney()
{
    delete ui;
}

void withdrawlMoney::on_withdrawlPbtn_clicked()
{
    QSound::play(":/atm.wav");
    long money = ui -> withdM->text().toLong();

    if(money < 0) {
        QMessageBox::critical(NULL, tr("消息！"), tr("请输入正数！"));
    } else if(money > 5000) {
        QMessageBox::critical(NULL, tr("消息！"), tr("单次取款金额小于5000！"));
    } else if (money % 100 != 0) {
        QMessageBox::critical(NULL, tr("消息！"), tr("取款金额为100整数倍！"));
    } else {

        if (publicData.changeSaving(-money)) {
            QMessageBox::about(NULL, tr("消息"), tr("成功！"));
        } else {
             QMessageBox::critical(NULL, tr("失败"), tr("余额不足！"));
        }
    }

    Account user = *(publicData.myIterUser);//待优化
    ui->saving->setText(QString::number(user.saving));

}

void withdrawlMoney::on_depoBack_clicked()
{
    close();
}
