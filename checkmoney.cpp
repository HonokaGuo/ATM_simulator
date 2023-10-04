#include "checkmoney.h"
#include "ui_checkmoney.h"

#include "data.h"
#include "QObject"
extern data publicData;
checkMoney::checkMoney(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checkMoney)
{
    ui->setupUi(this);
    Account user = *(publicData.myIterUser); //search完成后myIterUser存当前用户位置
    ui->saving->setText(QString::number(user.saving));
}

checkMoney::~checkMoney()
{
    delete ui;
}


void checkMoney::on_backCheck_clicked()
{
    close();
}
