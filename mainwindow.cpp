
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dashboordhamza.h"
#include "database.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
      this->showMaximized();

    QPixmap pix(":/img/images/456711.png");
    ui->label_3->setPixmap(pix.scaled(500,500,Qt::KeepAspectRatio));
    QPixmap pim(":/img/images/logo.png");
 //   ui->label_5->setPixmap(pim.scaled(200,200,Qt::KeepAspectRatio));

    qDebug()<<QSqlDatabase::drivers();

}

MainWindow::~MainWindow()
{
    delete ui;
}






void MainWindow::on_pushButton_clicked()
{

    QString user = ui->user->text();
    QString passowrd = ui->userPassword->text();
    if(user== "hamza" && passowrd =="1234"){
       //  QMessageBox::information(this,"treu","bienvenu akkaoui");
        hide();
        dashboordHamza secondeWinodw;
        secondeWinodw.setModal(true);
        secondeWinodw.exec();
    }
    else{
       QMessageBox::warning(this,"good","ERREUR password inccorect");
        ui->statusBar->showMessage("Passowrd inccorect",5000);
    }
}

