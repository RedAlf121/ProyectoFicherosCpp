#ifndef UFRMDIALOGINSERT_H
#define UFRMDIALOGINSERT_H

#include "ui_UfrmDialogInsert.h"

class InsertDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InsertDialog(QWidget *parent = 0);

    ~InsertDialog(){}
private slots:


private:
    Ui::insertDialog ui;
};

#endif // UFRMDIALOGINSERT_H
