#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "ui_UfrmDialogYear.h"
#include "utils.h"

class YearDialog : public QDialog
{
    Q_OBJECT
//
public:
    YearDialog(QWidget *parent = 0);


    ~YearDialog();
protected slots:
  virtual void on_pshBtrAccept_clicked() = 0;
protected:
    Ui::Dialog *ui;   
};

#endif // DIALOG_H
