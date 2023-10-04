#ifndef CONFIG_H
#define CONFIG_H
#include <list>
#include <QObject>
using namespace std;

class Account{
public:
    QString accountName;
    QString password;
    int saving;
};

typedef list<Account> accountList;
#endif // CONFIG_H
