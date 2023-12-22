#ifndef UFRMDONATIONUPDATED_H
#define UFRMDONATIONUPDATED_H

#include <QMainWindow>
#include <QTableWidget>
#include <student.h>

namespace Ui {
class UfrmDonationUpdated;
}

class UfrmDonationUpdated : public QMainWindow
{
    Q_OBJECT
protected slots:
    void on_pushAcceptDonation_clicked();
public:
    explicit UfrmDonationUpdated(QWidget *parent = 0);
    ~UfrmDonationUpdated();

private:
    Ui::UfrmDonationUpdated *ui;
    QWidget *prevForm;
    void build();
    void fillDonationYearTable(QTableWidget* tableWidget, const std::vector<Student>& students);
};

#endif // UFRMDONATIONUPDATED_H
