#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMainWindow>
#include "ui_UfrmDialogYear.h"
#include "utils.h"

#include <vector>
#include <string>

class YearDialog : public QDialog
{
    Q_OBJECT
//
public:
    YearDialog(QWidget *parent = 0);
    ~YearDialog();
    std::vector<std::string> getLoadedID();
    unsigned short value();
protected slots:
  void on_pshBtrAccept_clicked();

protected:
    Ui::Dialog *ui;
    QMainWindow *nextForm;
    std::vector<std::string> carnet;  // Cambiamos QStringList por std::vector<std::string>
    QWidget *prevForm;
    virtual void buildForm() = 0;
};


#endif // DIALOG_H
