#ifndef FRMPRINCIPAL_H
#define FRMPRINCIPAL_H

#include "ui_frmprincipal.h"

class frmPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit frmPrincipal(QWidget *parent = 0);

private slots:
    void on_actionCerrar_triggered();

    void on_actionInsertar_triggered();

private:
    Ui::frmPrincipal ui;

};

#endif // FRMPRINCIPAL_H
