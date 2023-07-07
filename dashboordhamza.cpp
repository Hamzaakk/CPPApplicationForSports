#include "dashboordhamza.h"
#include "ui_dashboordhamza.h"
#include "memberes.h"
#include "statistique.h"
#include"abonnement.h"
#include "paiment.h"
dashboordHamza::dashboordHamza(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dashboordHamza)
{

    ui->setupUi(this);
    this->showMaximized();
    QPixmap label(":/img/images/icons8-user-groups-100.png");
    ui->label->setPixmap(label.scaled(60,60,Qt::KeepAspectRatio));
    QPixmap label_2(":/img/images/icons8-money-bag-50.png");
    ui->label_2->setPixmap(label_2.scaled(60,60,Qt::KeepAspectRatio));
    QPixmap label_3(":/img/images/icons8-consultation-64.png");
    ui->label_3->setPixmap(label_3.scaled(60,60,Qt::KeepAspectRatio));
    QPixmap label_4(":/img/images/icons8-user-groups-100 (1).png");
    ui->label_4->setPixmap(label_4.scaled(60,60,Qt::KeepAspectRatio));
    QPixmap label_5(":/img/images/icons8-statistics-100.png");
    ui->label_5->setPixmap(label_5.scaled(60,60,Qt::KeepAspectRatio));

}

dashboordHamza::~dashboordHamza()
{
    delete ui;
}

void dashboordHamza::on_pushButton_clicked()
{
     hide();
    memberes Meb;
    Meb.setModal(true);
    Meb.exec();


}


void dashboordHamza::on_pushButton_5_clicked()
{
    hide();
    statistique sta;
    sta.setModal(true);
    sta.exec();
}


void dashboordHamza::on_pushButton_2_clicked()
{
    hide();
    abonnement ab;
    ab.setModal(true);
    ab.exec();
}


void dashboordHamza::on_pushButton_3_clicked()
{
    hide();
    paiment p;
    p.setModal(true);
    p.exec();
}

