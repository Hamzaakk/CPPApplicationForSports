#ifndef ABONNEMENT_H
#define ABONNEMENT_H

#include <QDialog>

namespace Ui {
class abonnement;
}

class abonnement : public QDialog
{
    Q_OBJECT

public:
    explicit abonnement(QWidget *parent = nullptr);
    ~abonnement();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::abonnement *ui;
};

#endif // ABONNEMENT_H
