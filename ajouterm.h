#ifndef AJOUTERM_H
#define AJOUTERM_H

#include <QDialog>
#include <QMessageBox>
#include <QFile>
#include <QDir>
#include <QDebug>
#include <QTextStream>
namespace Ui {
class AjouterM;
}

class AjouterM : public QDialog
{
    Q_OBJECT

public:
    explicit AjouterM(QWidget *parent = nullptr);
    ~AjouterM();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::AjouterM *ui;
};

#endif // AJOUTERM_H
