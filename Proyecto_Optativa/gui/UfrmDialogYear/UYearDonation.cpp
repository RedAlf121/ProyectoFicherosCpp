#include "UYearDonation.h"
#include "gui/UfrmDonationUpdated/UfrmDonationUpdated.h"
#include <iostream>
UYearDonation::UYearDonation(QWidget *parent) : YearDialog(parent)
{
      ui->label_dynamic->setText("donación: ");
}
void UYearDonation::buildForm()
{
  nextForm = new UfrmDonationUpdated(this);
}
