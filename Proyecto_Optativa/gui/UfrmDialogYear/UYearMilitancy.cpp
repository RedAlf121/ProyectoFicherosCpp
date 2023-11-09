#include "UYearMilitancy.h"
#include "gui/UfrmMilitancyUpdated/UfrmMilitancyUpdated.h"
#include <iostream>
UYearMilitancy::UYearMilitancy(QWidget *parent = 0) : YearDialog(parent)
{
  ui->label_dynamic->setText("militancia: ");
}
void UYearMilitancy::buildForm()
{
  nextForm = new UfrmMilitancyUpdated(this);
}
