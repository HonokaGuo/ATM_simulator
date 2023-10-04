#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H
#include "QDialog"
#include "config.h"

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT
public:
    LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();
    QString _userName;

};

#endif // LOGINDIALOG_H
