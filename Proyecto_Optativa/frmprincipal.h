#ifndef FRMPRINCIPAL_H
#define FRMPRINCIPAL_H

#include "ui_frmprincipal.h"
#include "UfrmDialogInsert.h"

class frmPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit frmPrincipal(QWidget *parent = 0);

private slots:
    void on_mnuActionInsertStudent_triggered();

private:
    Ui::frmPrincipal ui;
    InsertDialog *dialoginsert;

};

#endif // FRMPRINCIPAL_H
