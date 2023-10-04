#include "depositmoney.h"
#include "ui_depositmoney.h"

#include "data.h"
#include "QMessageBox"
#include "QObject"
extern data publicData;
depositMoney::depositMoney(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::depositMoney)
{
    ui->setupUi(this);
}

depositMoney::~depositMoney()
{
    delete ui;
}

void depositMoney::on_pushDepo_clicked()
{
    long money = ui->lineEdit->text().toLong();

    if (money > 0 ) {
        if(publicData.changeSaving(money)) {
            QMessageBox::about(NULL, tr("消息！"), tr("成功！"));
        } else {
            // QMessageBox::critical(NULL, tr("消息！"), tr("失败！"));
        }
    } else {
         QMessageBox::critical(NULL, tr("消息！"), tr("存款金额必须为正整数！"));
    }
}

void depositMoney::on_depoBack_clicked()
{
    close();
}
