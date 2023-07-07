#include "renouvler_abonnement.h"
#include "ui_renouvler_abonnement.h"
#include "abonnement.h"

renouvler_abonnement::renouvler_abonnement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::renouvler_abonnement)
{
    ui->setupUi(this);
    this->showMaximized();
}

renouvler_abonnement::~renouvler_abonnement()
{
    delete ui;
}

void renouvler_abonnement::on_pushButton_6_clicked()
{
    hide();
    abonnement a;
    a.setModal(true);
    a.exec();

}

