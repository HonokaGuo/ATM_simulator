#include "data.h"
#include "QTextStream"
#include "QFile"
#include "QMessageBox"
#include <QDebug>

data::data()
{

}

data::~data()
{

}

int data::loadInfo() {
    _accounts.clear(); //清除当前
    QFile file(fileName);
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream in(&file);

    while(!in.atEnd()) {
        Account tempUser;
        QString str = in.readLine();
        QStringList info = str.split(" ");
        tempUser.accountName = info.at(0);
        tempUser.password = info.at(1);
        tempUser.saving = info.at(2).toLong();

        _accounts.push_back(tempUser); //存入

        qDebug() << "loadInfo" << tempUser.accountName << tempUser.password<< _accounts.size();

    }
    file.close();

    return 0;
}

int data::saveInfo() {
    QFile file(fileName);
    if(!file.open(QIODevice::ReadWrite|QIODevice::Text))
    {return -1;}
    QTextStream out(&file);
    //遍历_accounts存所有数据
    accountList::iterator tempIter = _accounts.begin();
    for (;tempIter != _accounts.end(); tempIter++) {
        Account& user = *tempIter;
       out << user.accountName << " " << user.password \
           << " " << QString::number(user.saving) << endl;
    }

    return  0;
}

bool data::search(QString aName)
{
    accountList::iterator tempIter = _accounts.begin();
    for (;tempIter != _accounts.end(); ++tempIter)
    {
        qDebug() << (*tempIter).accountName
                 << (*tempIter).password
                 << (*tempIter).saving;
        Account user = *tempIter;
        if (user.accountName == aName)
        {
            currentAccount.accountName = user.accountName;
            currentAccount.password = user.password;
            currentAccount.saving = user.saving;
            myIterUser = tempIter;
            return true;
        }
    }
    return false;
}

bool data::changeSaving(long money) {
    Account& user = *myIterUser; //引用
    if ((user.saving + money) >= 0) {  //取款不能多于余额
        user.saving += money;
        saveInfo();
        return 1;
    } else {
        QMessageBox::warning(NULL, "失败！", "您的余额不足！");
        return 0;
    }

}

bool data::changePassword(QString old, QString newP) {
    Account& user = *myIterUser;
    if (user.password == old) {
        user.password = newP;
        saveInfo();
        QMessageBox::about(NULL, "消息", "密码更改成功！");
        return 1;
    } else {
        QMessageBox::critical(NULL, "错误", "旧密码错误！");
        return 0;
    }
}

