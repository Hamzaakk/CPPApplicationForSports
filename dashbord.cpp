
#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    vraiconnexionBD();
}

MainWindow::~MainWindow()
{
    delete ui;
}






void MainWindow::on_pushButton_clicked()
{

    QString user = ui->user->text();
    QString passowrd = ui->userPassword->text();
    if(user== "123" && passowrd =="1234")
    QMessageBox::warning(this,"good","Bienvenu chez AkkChen Gym");
    else{
       QMessageBox::warning(this,"good","ERREUR password inccorect");
    }
}

