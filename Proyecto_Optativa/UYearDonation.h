#ifndef UFMRDIALOGYEARDONATION_H
#define UFMRDIALOGYEARDONATION_H
#include "UfrmDialogYear.h"
class UYearDonation : public YearDialog
{
protected slots:
  virtual void on_pshBtrAccept_clicked();
public: 
   UYearDonation(QWidget *parent);
};

#endif // UFMRDIALOGYEARDONATION_H
