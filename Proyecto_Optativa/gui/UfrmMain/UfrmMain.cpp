#include "UfrmMain.h"
#include "gui/UfrmDialogInsert/UfrmDialogInsert.h"
#include "gui/UfrmDialogYear/UYearDonation.h"
#include "gui/UfrmDialogYear/UYearMilitancy.h"
UfrmMain::UfrmMain(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);
    dialoginsert = NULL;
    dialogyear = NULL;
    ui.tabMain->setCurrentIndex(0);
    this->setFixedSize(QSize(948, 600));
}

void UfrmMain::on_pshBtrInsertStudent_clicked()
{
    dialoginsert = new InsertDialog(this);
    dialoginsert->setModal(true);
    dialoginsert->show();
}
void UfrmMain::on_pshBtrMilitancy_clicked()
{
    YearDialog *y = new UYearMilitancy(0);
    createYearDialog(y);
    //createYearDialog(new UYearMilitancy(this));
}

void UfrmMain::on_pshBtrDonation_clicked()
{
  YearDialog *y = new UYearDonation(0);
  createYearDialog(y);
}

void UfrmMain::createYearDialog(YearDialog *newDialog)
{
  delete dialogyear;
  dialogyear = newDialog;
  dialogyear->setModal(true);
  dialogyear->show();
}
