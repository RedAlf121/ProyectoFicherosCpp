#include "UYearDonation.h"
#include <iostream>
UYearDonation::UYearDonation(QWidget *parent) : YearDialog(parent)
{
      ui->label_dynamic->setText("donación: ");
}
void UYearDonation::on_pshBtrAccept_clicked()
{
  std::cout<< "b\n";
}
