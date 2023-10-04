#ifndef DEPOSITMONEY_H
#define DEPOSITMONEY_H

#include <QDialog>

namespace Ui {
class depositMoney;
}

class depositMoney : public QDialog
{
    Q_OBJECT

public:
    explicit depositMoney(QWidget *parent = nullptr);
    ~depositMoney();

private slots:
    void on_pushDepo_clicked();

    void on_depoBack_clicked();

private:
    Ui::depositMoney *ui;
};

#endif // DEPOSITMONEY_H
