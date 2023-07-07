#ifndef RESTAURERMEM_H
#define RESTAURERMEM_H

#include <QDialog>

namespace Ui {
class RestaurerMem;
}

class RestaurerMem : public QDialog
{
    Q_OBJECT

public:
    explicit RestaurerMem(QWidget *parent = nullptr);
    ~RestaurerMem();

private:
    Ui::RestaurerMem *ui;
};

#endif // RESTAURERMEM_H
