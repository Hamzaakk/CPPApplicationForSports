#ifndef RENOUVLER_ABONNEMENT_H
#define RENOUVLER_ABONNEMENT_H

#include <QDialog>

namespace Ui {
class renouvler_abonnement;
}

class renouvler_abonnement : public QDialog
{
    Q_OBJECT

public:
    explicit renouvler_abonnement(QWidget *parent = nullptr);
    ~renouvler_abonnement();

private slots:
    void on_pushButton_6_clicked();

private:
    Ui::renouvler_abonnement *ui;
};

#endif // RENOUVLER_ABONNEMENT_H
