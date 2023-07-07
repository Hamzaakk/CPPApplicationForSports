#include "memberes.h"
#include "ui_memberes.h"
#include "ajouterm.h"
#include "modifier.h"
#include "fichiermem.h"
#include "restaurermem.h"
#include "supprission.h"
#include "dashboordhamza.h"
memberes::memberes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::memberes)
{
    ui->setupUi(this);
    this->showMaximized();

    QPixmap plus(":/img/images/plus.png");
    ui->plus->setPixmap(plus.scaled(30,30,Qt::KeepAspectRatio));
    QPixmap plus_2(":/img/images/settings-cogwheel-button.png");
    ui-> plus_2->setPixmap( plus_2.scaled(30,30,Qt::KeepAspectRatio));
    QPixmap plus_3(":/img/images/schedule.png");
    ui-> plus_3->setPixmap( plus_3.scaled(30,30,Qt::KeepAspectRatio));
    QPixmap plus_4(":/img/images/multiply.png");
    ui-> plus_4->setPixmap( plus_4.scaled(40,40,Qt::KeepAspectRatio));
    QPixmap plus_5(":/img/images/icons8-back-50.png");
    ui->plus_5->setPixmap(plus_5.scaled(40,40,Qt::KeepAspectRatio));
}

memberes::~memberes()
{
    delete ui;
}

void memberes::on_pushButton_clicked()
{
    hide();
    AjouterM secondeWinodw;
    secondeWinodw.setModal(true);
    secondeWinodw.exec();

}


void memberes::on_pushButton_3_clicked()
{

   // hide();
    FichierMem seconde;
    seconde.setModal(true);
    seconde.exec();

}


void memberes::on_pushButton_4_clicked()
{

   // hide();
    RestaurerMem secondeWinodw;
    secondeWinodw.setModal(true);
    secondeWinodw.exec();

}


void memberes::on_pushButton_5_clicked()
{

    hide();
    supprission secondeWinodw;
    secondeWinodw.setModal(true);
    secondeWinodw.exec();

}





void memberes::on_pushButton_2_clicked()
{
    hide();
    Modifier set;
    set.setModal((true));
    set.exec();
}


void memberes::on_pushButton_6_clicked()
{
    hide();
    dashboordHamza dash;
    dash.setModal(true);
    dash.exec();
}

