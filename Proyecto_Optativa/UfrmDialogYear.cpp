#include "UfrmDialogYear.h"


YearDialog::YearDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

YearDialog::~YearDialog()
{
    delete ui;
}
YearDialog::YearDialog(int whichForm, QWidget *parent = 0):YearDialog(parent)
{
  this->whichForm = whichForm;
  switch (this->whichForm) {
    case 0:
      // selectedForm = form1
      ui->label_dynamic.setText("Año de militancia: ");
      break;
    case 1:
      // selectedForm = form2
      ui->label_dynamic.setText("Año de donación: ");
      break;
    default:
      //throw std::exception("ese formulario no se encuentra");
      break;
  }

}

