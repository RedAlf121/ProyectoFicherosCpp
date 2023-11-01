#ifndef UFRMDONATIONUPDATED_H
#define UFRMDONATIONUPDATED_H

#include <QMainWindow>

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
};

#endif // UFRMDONATIONUPDATED_H
