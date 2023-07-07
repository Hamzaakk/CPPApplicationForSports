#ifndef PAIMENT_H
#define PAIMENT_H

#include <QDialog>

namespace Ui {
class paiment;
}

class paiment : public QDialog
{
    Q_OBJECT

public:
    explicit paiment(QWidget *parent = nullptr);
    ~paiment();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::paiment *ui;
};

#endif // PAIMENT_H
