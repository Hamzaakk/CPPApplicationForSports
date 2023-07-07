#include "reglements.h"
#include "ui_reglements.h"
#include "paiment.h"

reglements::reglements(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reglements)
{
    ui->setupUi(this);
    this->showMaximized();
}

reglements::~reglements()
{
    delete ui;
}

void reglements::on_pushButton_4_clicked()
{
    hide();
    paiment p;
    p.setModal(true);
    p.exec();
}

