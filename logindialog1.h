#ifndef LOGINDIALOG1_H
#define LOGINDIALOG1_H
#include "config.h"
#include "data.h"
#include <QDialog>
extern data publicData;
namespace Ui {
class LoginDialog1;
}

class LoginDialog1 : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog1(QWidget *parent = nullptr);
    ~LoginDialog1();
private slots:
    void on_loginBtn_clicked();

private:
    Ui::LoginDialog1 *ui;
};

#endif // LOGINDIALOG1_H
