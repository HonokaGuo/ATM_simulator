#ifndef WITHDRAWLMONEY_H
#define WITHDRAWLMONEY_H

#include <QDialog>

namespace Ui {
class withdrawlMoney;
}

class withdrawlMoney : public QDialog
{
    Q_OBJECT

public:
    explicit withdrawlMoney(QWidget *parent = nullptr);
    ~withdrawlMoney();

private slots:
    void on_withdrawlPbtn_clicked();

    void on_depoBack_clicked();

private:
    Ui::withdrawlMoney *ui;
};

#endif // WITHDRAWLMONEY_H
