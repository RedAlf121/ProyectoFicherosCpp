#ifndef UFRMDIALOGINSERT_H
#define UFRMDIALOGINSERT_H

#include "ui_UfrmDialogInsert.h"

class InsertDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InsertDialog(QWidget *parent = 0);

private slots:
    void on_pshBtrAccept_clicked();

private:
    Ui::insertDialog ui;
    QWidget* mainPtr;
};

#endif // UFRMDIALOGINSERT_H
