#include "UfrmDialogYear.h"


YearDialog::YearDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(290, 131));
}

YearDialog::~YearDialog()
{
    delete ui;
}


void on_pshBtrAccept_clicked();

void YearDialog::on_pshBtrAccept_clicked()
{
  buildForm();
  nextForm->show();
  close();
}
