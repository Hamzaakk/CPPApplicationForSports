#include "fichiermem.h"
#include "ui_fichiermem.h"
#include <QMessageBox>
#include "memberes.h"
#include <QSqlTableModel>
#include "connexion_my_sql.h"
#include <QtSql>
FichierMem::FichierMem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FichierMem)
{
    ui->setupUi(this);
    this->showMaximized();
    // Add the MySQL driver
    cnxdata();

    affichagemember();
}

FichierMem::~FichierMem()
{
    delete ui;
}
void FichierMem::affichagemember()
{
    // Establish the database connection
    cnxdata();
   QSqlQuery query;
    QString countQuery = "SELECT COUNT(*) FROM user";

    // Create a QSqlQuery object and associate it with the database connection
    query.prepare(countQuery);

    // Execute the query to count the rows
    int rowCount = 0;
    if (query.exec(countQuery))
    {
        // Check if the query has a result
        while (query.next())
        {
            // Access the query result
            rowCount = query.value(0).toInt();
        }
        rowCount++;
    }
    else
    {
        qDebug() << "Failed to execute count query:" << query.lastError().text();
        return;
    }

    QSqlQuery rqy;
    modele = new QStandardItemModel(rowCount, 6);
    int row(6);
    rqy.prepare("SELECT *  FROM  user");  // Replace 'users' with your table name

    // Execute the query
    while(rqy.next())
    {
        for(int j=0;j<6;j++)
        {
            QStandardItem *item = new QStandardItem(rqy.value(j).toString());
            modele->setItem(row,j,item);

        }
        row++;
    }
    modele->setHeaderData(0,Qt::Horizontal,"Nom");
    modele->setHeaderData(1,Qt::Horizontal,"prenom");
    modele->setHeaderData(2,Qt::Horizontal,"age");
    modele->setHeaderData(3,Qt::Horizontal,"login");
    modele->setHeaderData(4,Qt::Horizontal,"password");
    modele->setHeaderData(5,Qt::Horizontal,"id");
    ui->tableView->setModel(modele);
    qDebug() <<modele->rowCount();
}



void FichierMem::on_pushButton_2_clicked()
{
    hide();
    memberes rest;
    rest.setModal(true);
    rest.exec();

}




void FichierMem::cnxdata()
{
    db = QSqlDatabase::addDatabase("QMYSQL");

    // Set the connection parameters
    db.setHostName("127.0.0.1"); // Replace with your MySQL server IP address
    db.setPort(3306); // Replace with your MySQL server port
    db.setUserName("root"); // Replace with your MySQL username
    db.setPassword(""); // Replace with your MySQL password
    db.setDatabaseName("qt"); // Replace with your MySQL database name

    // Open the database
    if (db.open())
    {
        qDebug() << "Database connection established.";
    }
    else {
        qDebug() << "Database is  not connect";
    }
}
