#ifndef UFMRDIALOGYEARDONATION_H
#define UFMRDIALOGYEARDONATION_H
#include "UfrmDialogYear.h"
class UYearDonation : public YearDialog
{
protected:
  virtual void buildForm();

public: 
   UYearDonation(QWidget *parent);
};

#endif // UFMRDIALOGYEARDONATION_H
