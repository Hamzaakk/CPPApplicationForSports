
#ifndef DATABASE_H
#define DATABASE_H

#include "QSqlDatabase"
#include "QSqlQuery"

static bool openDatabase(){
    QSqlDatabase conn=QSqlDatabase::addDatabase("QSQLITE");
    conn.setDatabaseName("C:/xampp/mysql/data/akkachen/"
                         "lient.ibd");
    if(conn.open()) {
        return true;
    }else{
        return false;
    }
}


#endif // DATABASE_H
