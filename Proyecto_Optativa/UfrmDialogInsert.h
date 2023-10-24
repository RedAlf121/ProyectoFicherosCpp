#ifndef DIALOGINSERTAR_H
#define DIALOGINSERTAR_H

#include "ui_dialogInsertar.h"

class InsertDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InsertDialog(QWidget *parent = 0);

private slots:


private:
    Ui::insertDialog ui;
};

#endif // DIALOGINSERTAR_H
