#ifndef DATA_H
#define DATA_H
#include <QDialog>
#include <config.h>
class data
{
public:
    data();
    ~data();
    int loadInfo();
    int saveInfo();
    bool changeSaving(long money);
    bool search(QString aName);
    bool changePassword(QString old, QString newP);

    QString fileName = "info.txt";
    accountList _accounts;
    Account currentAccount;
    accountList::iterator myIterUser;

};

#endif // DATA_H
