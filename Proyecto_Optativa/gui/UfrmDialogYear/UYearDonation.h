#ifndef UFMRDIALOGYEARDONATION_H
#define UFMRDIALOGYEARDONATION_H
#include "UfrmDialogYear.h"
class UYearDonation : public YearDialog
{
protected:
  virtual void buildForm();

public: 
   UYearDonation(QWidget *parent);
   void show_donation_updated();
};

#endif // UFMRDIALOGYEARDONATION_H
