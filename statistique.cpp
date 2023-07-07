#include "statistique.h"
#include "ui_statistique.h"
#include "memberes.h"
#include "dashboordhamza.h"
statistique::statistique(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::statistique)
{
    ui->setupUi(this);
this->showMaximized();
}

statistique::~statistique()
{
    delete ui;
}

void statistique::on_pushButton_6_clicked()
{
    hide();
    dashboordHamza meb;
    meb.setModal(true);
    meb.exec();

}

