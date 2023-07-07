#ifndef MEMBERES_H
#define MEMBERES_H

#include <QDialog>

namespace Ui {
class memberes;
}

class memberes : public QDialog
{
    Q_OBJECT

public:
    explicit memberes(QWidget *parent = nullptr);
    ~memberes();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::memberes *ui;
};

#endif // MEMBERES_H
