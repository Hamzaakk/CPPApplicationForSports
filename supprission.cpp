#include "supprission.h"
#include "ui_supprission.h"
#include "memberes.h"

supprission::supprission(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supprission)
{
    ui->setupUi(this);
    this->showMaximized();
    QPixmap deletet(":/img/images/icons8-delete-100.png");
    ui->label->setPixmap(deletet.scaled(200,200,Qt::KeepAspectRatio));
}

supprission::~supprission()
{
    delete ui;
}

void supprission::on_pushButton_6_clicked()
{
    hide();
    memberes ret;
    ret.setModal(true);
    ret.exec();

}

