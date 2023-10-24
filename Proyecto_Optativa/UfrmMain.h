#ifndef FRMPRINCIPAL_H
#define FRMPRINCIPAL_H

#include "ui_frmprincipal.h"
#include "UfrmDialogInsert.h"

class UfrmMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit UfrmMain(QWidget *parent = 0);

private slots:
    void on_mnuActionInsertStudent_triggered();

private:
    Ui::ufrmMain ui;
    InsertDialog *dialoginsert;

};

#endif // FRMPRINCIPAL_H
