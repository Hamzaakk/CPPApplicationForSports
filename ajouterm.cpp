#include "ajouterm.h"
#include "ui_ajouterm.h"
#include "memberes.h"
#include "database.h"
#include <QSqlTableModel>
#include "connexion_my_sql.h"
AjouterM::AjouterM(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AjouterM)
{
    ui->setupUi(this);
    this->showMaximized();
    QPixmap men(":/img/images/726.jpg");
    ui->label->setPixmap(men.scaled(330,330,Qt::KeepAspectRatio));
    ui->lineEdit->setPlaceholderText("Prenom");
    ui->lineEdit_2->setPlaceholderText("Nom");
    ui->lineEdit_3->setPlaceholderText("année de naissance");
    ui->lineEdit_4->setPlaceholderText("Numero de télephone");
    ui->lineEdit_5->setPlaceholderText("Montant d'Avance");
     qDebug()<<QSqlDatabase::drivers();




}

AjouterM::~AjouterM()
{
    delete ui;
}


void AjouterM::on_pushButton_3_clicked()
{
    hide();
    memberes Meb;
    Meb.setModal(true);
    Meb.exec();

}

void AjouterM::on_pushButton_6_clicked()
{
    hide();
    memberes Meb;
    Meb.setModal(true);
    Meb.exec();

}


void AjouterM::on_pushButton_4_clicked()
{
    QString val1= ui->lineEdit->text();
    QString val2= ui->lineEdit_2->text();
    QString val3= ui->lineEdit_3->text();
    QString val4= ui->lineEdit_4->text();
    QString val5= ui->lineEdit_5->text();


    // Retrieve the values from the comboboxes
    QString combobox1Value = ui->comboBox->currentText();
    QString combobox2Value = ui->comboBox_2->currentText();

    // Retrieve the value from the radio buttons
    bool radioButton1Checked = ui->radioButton->isChecked();
    bool radioButton2Checked = ui->radioButton_2->isChecked();

    // Retrieve the value from the QDateEdit widget
    QDate dateValue = ui->dateEdit->date();

    QFile file("lesmembere.txt");
    if(file.open(QIODevice::Append | QIODevice::ReadWrite))
    {
        QTextStream ecriture(&file);
        ecriture << "Nom: " << val1 << " Prenom: " << val2 << " anne de naissance: " << val3 << " numero: " << val4 << " montant avance: " << val5 << "\n";
        ecriture << "sport 1 value: " << combobox1Value << "\n";
        ecriture << "mois 2 value: " << combobox2Value << "\n";
        ecriture << "homme 1 checked: " << (radioButton1Checked ? "true" : "false") << "\n";
        ecriture << "femme 2 checked: " << (radioButton2Checked ? "true" : "false") << "\n";
        ecriture << "Date value: " << dateValue.toString("yyyy-MM-dd") << "\n";
        file.close();
    }
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream  lecture(&file);
        QString montext = lecture.readAll();


    }

}

