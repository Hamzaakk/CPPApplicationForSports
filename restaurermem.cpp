#include "restaurermem.h"
#include "ui_restaurermem.h"

RestaurerMem::RestaurerMem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RestaurerMem)
{
    ui->setupUi(this);
    this->showMaximized();

}

RestaurerMem::~RestaurerMem()
{
    delete ui;
}
