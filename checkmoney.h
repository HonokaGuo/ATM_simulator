#ifndef CHECKMONEY_H
#define CHECKMONEY_H

#include <QDialog>

namespace Ui {
class checkMoney;
}

class checkMoney : public QDialog
{
    Q_OBJECT

public:
    explicit checkMoney(QWidget *parent = nullptr);
    ~checkMoney();

private slots:
    void on_backCheck_clicked();

private:
    Ui::checkMoney *ui;
};

#endif // CHECKMONEY_H
