#ifndef DASHBOORDHAMZA_H
#define DASHBOORDHAMZA_H

#include <QDialog>

namespace Ui {
class dashboordHamza;
}

class dashboordHamza : public QDialog
{
    Q_OBJECT

public:
    explicit dashboordHamza(QWidget *parent = nullptr);
    ~dashboordHamza();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::dashboordHamza *ui;
};

#endif // DASHBOORDHAMZA_H
