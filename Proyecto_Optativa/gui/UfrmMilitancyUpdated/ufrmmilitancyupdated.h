#ifndef UFRMMILITANCYUPDATED_H
#define UFRMMILITANCYUPDATED_H

#include <QMainWindow>

namespace Ui {
class UfrmMilitancyUpdated;
}

class UfrmMilitancyUpdated : public QMainWindow
{
    Q_OBJECT
protected slots:
    void on_pushAcceptMilitancy_clicked();
public:
    explicit UfrmMilitancyUpdated(QWidget *parent = 0);
    ~UfrmMilitancyUpdated();

private:
    Ui::UfrmMilitancyUpdated *ui;
};

#endif // UFRMMILITANCYUPDATED_H
