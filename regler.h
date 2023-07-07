#ifndef REGLER_H
#define REGLER_H

#include <QDialog>

namespace Ui {
class regler;
}

class regler : public QDialog
{
    Q_OBJECT

public:
    explicit regler(QWidget *parent = nullptr);
    ~regler();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::regler *ui;
};

#endif // REGLER_H
