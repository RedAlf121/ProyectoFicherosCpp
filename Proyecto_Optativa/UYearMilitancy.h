#ifndef UFRMDIALOGYEARMILITANCY_H
#define UFRMDIALOGYEARMILITANCY_H
#include "UfrmDialogYear.h"
class UYearMilitancy  : public YearDialog
{
protected slots:
  virtual void on_pshBtrAccept_clicked();
public:  
  UYearMilitancy(QWidget *parent);
};

#endif // UFRMDIALOGYEARMILITANCY_H
