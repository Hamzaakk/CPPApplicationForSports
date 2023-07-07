#ifndef FICHIERMEM_H
#define FICHIERMEM_H
#include "database.h"
#include <QDialog>
#include "QStandardItemModel"
namespace Ui {
class FichierMem;
}

class FichierMem : public QDialog
{
    Q_OBJECT

public:
    explicit FichierMem(QWidget *parent = nullptr);
    ~FichierMem();
    void cnxdata();

private slots:
    void affichagemember();

    void on_pushButton_2_clicked();

private:
    Ui::FichierMem *ui;
    QStandardItemModel *modele;
    QSqlDatabase db;

};

#endif // FICHIERMEM_H
