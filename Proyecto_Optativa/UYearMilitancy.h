#ifndef UFRMDIALOGYEARMILITANCY_H
#define UFRMDIALOGYEARMILITANCY_H
#include "UfrmDialogYear.h"
class UYearMilitancy  : public YearDialog
{
protected:
  virtual void buildForm();
public:  
  UYearMilitancy(QWidget *parent);
};

#endif // UFRMDIALOGYEARMILITANCY_H
