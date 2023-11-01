#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "utils.h"

namespace Ui {
class Dialog;
}

class YearDialog : public QDialog
{
    Q_OBJECT

public:
    explicit YearDialog(QWidget *parent = 0);
    explicit YearDialog(int whichForm, QWidget *parent = 0);

    ~YearDialog();

private:
    Ui::Dialog *ui;
    int whichForm;
    QWidget selectedForm;
};

#endif // DIALOG_H
