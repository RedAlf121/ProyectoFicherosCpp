#ifndef DIALOGINSERTAR_H
#define DIALOGINSERTAR_H

#include "ui_dialogInsertar.h"

class dialogInsertar : public QDialog
{
    Q_OBJECT

public:
    explicit dialogInsertar(QWidget *parent = 0);

private slots:
    void on_btnCancelar_clicked();

private:
    Ui::dialogInsertar ui;
};

#endif // DIALOGINSERTAR_H
