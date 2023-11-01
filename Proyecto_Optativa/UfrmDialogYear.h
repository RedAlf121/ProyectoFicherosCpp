#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMainWindow>
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
  void on_pshBtrAccept_clicked();
protected:
    Ui::Dialog *ui;
    QMainWindow *nextForm;

    virtual void buildForm() = 0;
};

#endif // DIALOG_H
