#include "historique.h"
#include "ui_historique.h"
#include "paiment.h"

historique::historique(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::historique)
{
    ui->setupUi(this);
    this->showMaximized();
}

historique::~historique()
{
    delete ui;
}

void historique::on_pushButton_4_clicked()
{
    hide();
    paiment p;
    p.setModal(true);
    p.exec();
}

