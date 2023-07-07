#include "modifier.h"
#include "ui_modifier.h"
#include "fichiermem.h"
#include <QMessageBox>
#include "memberes.h"
#include "ajouterm.h"
#include "connexion_my_sql.h"
Modifier::Modifier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Modifier)
{
    ui->setupUi(this);
    this->showMaximized();

  //  QFile File("lesmembere.txt");
  //  if(File.open(QIODevice::ReadOnly))
 //   {
  //      QTextStream stream(&File);
  //      QString Filedata;
  //      while( stream.atEnd() == false)
   //     {
   //         Filedata += stream.readLine()+"\n";

   //     }
   //     ui->textEdit->setText(Filedata );
   // }

}

Modifier::~Modifier()
{
    delete ui;
}



void Modifier::on_pushButton_2_clicked()
{
    hide();
    memberes ret;
    ret.setModal(true);
    ret.exec();

}

