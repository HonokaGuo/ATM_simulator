#ifndef CHANGEPASSWORD_H
#define CHANGEPASSWORD_H

#include <QDialog>

namespace Ui {
class changePassword;
}

class changePassword : public QDialog
{
    Q_OBJECT

public:
    explicit changePassword(QWidget *parent = nullptr);
    ~changePassword();
   bool countineSame(QString);

private slots:
    void on_changePWDbtn_clicked();

    void on_changePWD_clicked();

private:
    Ui::changePassword *ui;
};

#endif // CHANGEPASSWORD_H
