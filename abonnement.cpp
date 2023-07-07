#include "abonnement.h"
#include "ui_abonnement.h"
#include "dashboordhamza.h"
#include "modifier_abonnement.h"
#include "renouvler_abonnement.h"

abonnement::abonnement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::abonnement)
{
    ui->setupUi(this);
    this->showMaximized();

}

abonnement::~abonnement()
{
    delete ui;
}

void abonnement::on_pushButton_6_clicked()
{
    hide();
    dashboordHamza d;
    d.setModal(true);
    d.exec();

}


void abonnement::on_pushButton_3_clicked()
{
    hide();
    renouvler_abonnement r;
    r.setModal(true);
    r.exec();
}


void abonnement::on_pushButton_4_clicked()
{
    hide();
    modifier_abonnement m;
    m.setModal(true);
    m.exec();
}

