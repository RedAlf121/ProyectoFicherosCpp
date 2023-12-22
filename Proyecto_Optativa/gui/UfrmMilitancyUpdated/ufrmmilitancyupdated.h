#ifndef UFRMMILITANCYUPDATED_H
#define UFRMMILITANCYUPDATED_H

#include <QMainWindow>
#include <QTableWidget>
#include <student.h>

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
    QWidget *prevForm;
    void build();
    void fillTable(QTableWidget* tableWidget, const std::vector<Student>& students);
};

#endif // UFRMMILITANCYUPDATED_H
