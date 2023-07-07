#include "paiment.h"
#include "ui_paiment.h"
#include "dashboordhamza.h"
#include "regler.h"
#include "reglements.h"
#include "historique.h"

paiment::paiment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::paiment)
{
    ui->setupUi(this);
    this->showMaximized();
    QPixmap label(":/img/images/icons8-support-50.png");
   ui->label->setPixmap(label.scaled(60,60,Qt::KeepAspectRatio));
    QPixmap label_2(":/img/images/icons8-services-48.png");
    ui->label_2->setPixmap(label_2.scaled(60,60,Qt::KeepAspectRatio));
     QPixmap label_3(":/img/images/icons8-test-réussi-94.png");
    ui->label_3->setPixmap(label_3.scaled(60,60,Qt::KeepAspectRatio));
}

paiment::~paiment()
{
    delete ui;
}

void paiment::on_pushButton_6_clicked()
{
    hide();
    dashboordHamza d;
    d.setModal(true);
    d.exec();
}


void paiment::on_pushButton_3_clicked()
{
    hide();
    regler r;
    r.setModal(true);
    r.exec();
}


void paiment::on_pushButton_5_clicked()
{
    hide();
    reglements re;
    re.setModal(true);
    re.exec();
}


void paiment::on_pushButton_4_clicked()
{
    hide();
    historique h;
    h.setModal(true);
    h.exec();
}

