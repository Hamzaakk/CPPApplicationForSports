#include "modifier_abonnement.h"
#include "ui_modifier_abonnement.h"
#include "abonnement.h"

modifier_abonnement::modifier_abonnement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifier_abonnement)
{
    ui->setupUi(this);
    this->showMaximized();
}

modifier_abonnement::~modifier_abonnement()
{
    delete ui;
}

void modifier_abonnement::on_pushButton_4_clicked()
{
    hide();
    abonnement a;
    a.setModal(true);
    a.exec();
}

