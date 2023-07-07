#ifndef MODIFIER_ABONNEMENT_H
#define MODIFIER_ABONNEMENT_H

#include <QDialog>

namespace Ui {
class modifier_abonnement;
}

class modifier_abonnement : public QDialog
{
    Q_OBJECT

public:
    explicit modifier_abonnement(QWidget *parent = nullptr);
    ~modifier_abonnement();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::modifier_abonnement *ui;
};

#endif // MODIFIER_ABONNEMENT_H
