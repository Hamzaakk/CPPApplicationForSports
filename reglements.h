#ifndef REGLEMENTS_H
#define REGLEMENTS_H

#include <QDialog>

namespace Ui {
class reglements;
}

class reglements : public QDialog
{
    Q_OBJECT

public:
    explicit reglements(QWidget *parent = nullptr);
    ~reglements();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::reglements *ui;
};

#endif // REGLEMENTS_H
