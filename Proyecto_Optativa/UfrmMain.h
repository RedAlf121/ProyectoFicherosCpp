#ifndef UFRMMAIN_H
#define UFRMMAIN_H

#include "ui_UfrmMain.h"
#include "UfrmDialogInsert.h"

class UfrmMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit UfrmMain(QWidget *parent = 0);

private slots:
    void on_mnuActionInsertStudent_triggered();

    void on_pshBtrInsertStudent_clicked();

private:
    Ui::ufrmMain ui;
    InsertDialog *dialoginsert;

};

#endif // UFRMMAIN_H
