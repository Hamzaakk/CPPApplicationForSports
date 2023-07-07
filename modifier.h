#ifndef MODIFIER_H
#define MODIFIER_H
#include "fichiermem.h"
#include <QDialog>

namespace Ui {
class Modifier;
}

class Modifier : public QDialog
{
    Q_OBJECT

public:
    explicit Modifier(QWidget *parent = nullptr);
    ~Modifier();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Modifier *ui;



};

#endif // MODIFIER_H
