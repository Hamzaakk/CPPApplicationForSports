#include "regler.h"
#include "ui_regler.h"
#include "paiment.h"

regler::regler(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regler)
{
    ui->setupUi(this);
    this->showMaximized();
}

regler::~regler()
{
    delete ui;
}

void regler::on_pushButton_4_clicked()
{
    hide();
    paiment p;
    p.setModal(true);
    p.exec();
}
