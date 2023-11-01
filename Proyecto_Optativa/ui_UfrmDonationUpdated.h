/********************************************************************************
** Form generated from reading UI file 'UfrmDonationUpdated.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UFRMDONATIONUPDATED_H
#define UI_UFRMDONATIONUPDATED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UfrmDonationUpdated
{
public:
    QWidget *centralwidget;
    QPushButton *pushAcceptDonation;
    QLabel *labelTotalMinorDonation;
    QTableWidget *tableStudentsMinorMilitancy;
    QLabel *labelMinorYearsDonation;
    QLabel *labelElderYearsDonation;
    QTableWidget *tableStudentsElderMilitancy;
    QLabel *labelTotalElderDonation;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UfrmDonationUpdated)
    {
        if (UfrmDonationUpdated->objectName().isEmpty())
            UfrmDonationUpdated->setObjectName(QStringLiteral("UfrmDonationUpdated"));
        UfrmDonationUpdated->resize(892, 691);
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(12);
        UfrmDonationUpdated->setFont(font);
        centralwidget = new QWidget(UfrmDonationUpdated);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushAcceptDonation = new QPushButton(centralwidget);
        pushAcceptDonation->setObjectName(QStringLiteral("pushAcceptDonation"));
        pushAcceptDonation->setGeometry(QRect(390, 620, 111, 31));
        labelTotalMinorDonation = new QLabel(centralwidget);
        labelTotalMinorDonation->setObjectName(QStringLiteral("labelTotalMinorDonation"));
        labelTotalMinorDonation->setGeometry(QRect(30, 570, 71, 21));
        labelTotalMinorDonation->setFont(font);
        tableStudentsMinorMilitancy = new QTableWidget(centralwidget);
        if (tableStudentsMinorMilitancy->columnCount() < 4)
            tableStudentsMinorMilitancy->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudentsMinorMilitancy->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudentsMinorMilitancy->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudentsMinorMilitancy->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudentsMinorMilitancy->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableStudentsMinorMilitancy->setObjectName(QStringLiteral("tableStudentsMinorMilitancy"));
        tableStudentsMinorMilitancy->setGeometry(QRect(30, 50, 401, 501));
        tableStudentsMinorMilitancy->setFont(font);
        labelMinorYearsDonation = new QLabel(centralwidget);
        labelMinorYearsDonation->setObjectName(QStringLiteral("labelMinorYearsDonation"));
        labelMinorYearsDonation->setGeometry(QRect(30, 10, 401, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        font1.setPointSize(10);
        labelMinorYearsDonation->setFont(font1);
        labelMinorYearsDonation->setAlignment(Qt::AlignCenter);
        labelElderYearsDonation = new QLabel(centralwidget);
        labelElderYearsDonation->setObjectName(QStringLiteral("labelElderYearsDonation"));
        labelElderYearsDonation->setGeometry(QRect(464, 10, 391, 20));
        labelElderYearsDonation->setFont(font1);
        labelElderYearsDonation->setAlignment(Qt::AlignCenter);
        tableStudentsElderMilitancy = new QTableWidget(centralwidget);
        if (tableStudentsElderMilitancy->columnCount() < 4)
            tableStudentsElderMilitancy->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudentsElderMilitancy->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudentsElderMilitancy->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudentsElderMilitancy->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudentsElderMilitancy->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        tableStudentsElderMilitancy->setObjectName(QStringLiteral("tableStudentsElderMilitancy"));
        tableStudentsElderMilitancy->setGeometry(QRect(460, 50, 401, 501));
        tableStudentsElderMilitancy->setFont(font);
        labelTotalElderDonation = new QLabel(centralwidget);
        labelTotalElderDonation->setObjectName(QStringLiteral("labelTotalElderDonation"));
        labelTotalElderDonation->setGeometry(QRect(460, 570, 71, 21));
        UfrmDonationUpdated->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(UfrmDonationUpdated);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        UfrmDonationUpdated->setStatusBar(statusbar);

        retranslateUi(UfrmDonationUpdated);

        QMetaObject::connectSlotsByName(UfrmDonationUpdated);
    } // setupUi

    void retranslateUi(QMainWindow *UfrmDonationUpdated)
    {
        UfrmDonationUpdated->setWindowTitle(QApplication::translate("UfrmDonationUpdated", "MainWindow", 0));
        pushAcceptDonation->setText(QApplication::translate("UfrmDonationUpdated", "Aceptar", 0));
        labelTotalMinorDonation->setText(QApplication::translate("UfrmDonationUpdated", "Total: ", 0));
        QTableWidgetItem *___qtablewidgetitem = tableStudentsMinorMilitancy->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("UfrmDonationUpdated", "CI", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableStudentsMinorMilitancy->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("UfrmDonationUpdated", "Nombres ", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableStudentsMinorMilitancy->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("UfrmDonationUpdated", "Apellidos", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableStudentsMinorMilitancy->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("UfrmDonationUpdated", "Ingreso\n"
"UJC", 0));
        labelMinorYearsDonation->setText(QApplication::translate("UfrmDonationUpdated", "Estudiantes cuyo a\303\261o de ingreso es anterior al especificado", 0));
        labelElderYearsDonation->setText(QApplication::translate("UfrmDonationUpdated", "Estudiantes cuyo a\303\261o de ingreso es posterior al especificado", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableStudentsElderMilitancy->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("UfrmDonationUpdated", "CI", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableStudentsElderMilitancy->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("UfrmDonationUpdated", "Nombres ", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableStudentsElderMilitancy->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("UfrmDonationUpdated", "Apellidos", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableStudentsElderMilitancy->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("UfrmDonationUpdated", "Ingreso\n"
"UJC", 0));
        labelTotalElderDonation->setText(QApplication::translate("UfrmDonationUpdated", "Total: ", 0));
    } // retranslateUi

};

namespace Ui {
    class UfrmDonationUpdated: public Ui_UfrmDonationUpdated {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UFRMDONATIONUPDATED_H
