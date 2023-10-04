#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "checkmoney.h"
#include "data.h"
#include "depositmoney.h"
#include "withdrawlmoney.h"
#include "changepassword.h"
#include <QSound>
extern data publicData;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_exit_clicked()
{
    QSound::play(":/atm.wav");
    close();
}

void MainWindow::on_check_clicked()
{
    QSound::play(":/atm.wav");
    checkMoney cM;
    cM.setWindowTitle("查询余额");
    cM.setWindowIcon(QIcon(":/icon.ico"));
    cM.exec();
}

void MainWindow::on_depoMoney_clicked()
{
    QSound::play(":/atm.wav");
    depositMoney dM;
    dM.setWindowTitle("存款");
    dM.setWindowIcon(QIcon(":/icon.ico"));
    dM.exec();
}

void MainWindow::on_withdrawlM_clicked()
{
    QSound::play(":/atm.wav");
    withdrawlMoney wM;
    wM.setWindowTitle("取款");
    wM.setWindowIcon(QIcon(":/icon.ico"));
    wM.exec();
}

void MainWindow::on_pwdChange_clicked()
{
    QSound::play(":/atm.wav");
    changePassword cP;
    cP.setWindowTitle("更改密码");
    cP.setWindowIcon(QIcon(":/icon.ico"));
    cP.exec();
}
