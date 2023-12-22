#ifndef UFRMMAIN_H
#define UFRMMAIN_H

#include "ui_UfrmMain.h"
#include "../UfrmDialogInsert/UfrmDialogInsert.h"
#include "../../gui/UfrmDialogYear/UfrmDialogYear.h"

class UfrmMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit UfrmMain(QWidget *parent = 0);
    void setStudentData();
    Ui::ufrmMain getUI();
private slots:
    void on_pshBtrInsertStudent_clicked();
    void on_pshBtrMilitancy_clicked();
    void on_pshBtrDonation_clicked();
    void on_pshBtrDeleteStudent_clicked();
private:
    Ui::ufrmMain ui;
    InsertDialog *dialoginsert;
    YearDialog *dialogyear;

    void createYearDialog(YearDialog *);

};

#endif // UFRMMAIN_H
