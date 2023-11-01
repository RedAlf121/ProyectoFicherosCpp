#include "UYearMilitancy.h"
#include <iostream>
UYearMilitancy::UYearMilitancy(QWidget *parent = 0) : YearDialog(parent)
{
  ui->label_dynamic->setText("militancia: ");
}
void UYearMilitancy::on_pshBtrAccept_clicked()
{
  std::cout<< "a\n";
}
