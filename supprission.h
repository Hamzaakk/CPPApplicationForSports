#ifndef SUPPRISSION_H
#define SUPPRISSION_H

#include <QDialog>

namespace Ui {
class supprission;
}

class supprission : public QDialog
{
    Q_OBJECT

public:
    explicit supprission(QWidget *parent = nullptr);
    ~supprission();

private slots:
    void on_pushButton_6_clicked();

private:
    Ui::supprission *ui;
};

#endif // SUPPRISSION_H
