/********************************************************************************
** Form generated from reading UI file 'UfrmMilitancyUpdated.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UFRMMILITANCYUPDATED_H
#define UI_UFRMMILITANCYUPDATED_H

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

class Ui_UfrmMilitancyUpdated
{
public:
    QWidget *centralwidget;
    QLabel *labelMinorYears;
    QLabel *labelSameYear;
    QLabel *labelElderYears;
    QTableWidget *tableStudents;
    QTableWidget *tableStudents_2;
    QTableWidget *tableStudents_3;
    QLabel *labelTotalMinor;
    QLabel *labelTotalSame;
    QLabel *labelTotalElder;
    QPushButton *pshBtrMilitancyAccept;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UfrmMilitancyUpdated)
    {
        if (UfrmMilitancyUpdated->objectName().isEmpty())
            UfrmMilitancyUpdated->setObjectName(QStringLiteral("UfrmMilitancyUpdated"));
        UfrmMilitancyUpdated->resize(1322, 686);
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(12);
        UfrmMilitancyUpdated->setFont(font);
        centralwidget = new QWidget(UfrmMilitancyUpdated);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        labelMinorYears = new QLabel(centralwidget);
        labelMinorYears->setObjectName(QStringLiteral("labelMinorYears"));
        labelMinorYears->setGeometry(QRect(30, 10, 401, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        font1.setPointSize(10);
        labelMinorYears->setFont(font1);
        labelSameYear = new QLabel(centralwidget);
        labelSameYear->setObjectName(QStringLiteral("labelSameYear"));
        labelSameYear->setGeometry(QRect(464, 10, 391, 20));
        labelSameYear->setFont(font1);
        labelElderYears = new QLabel(centralwidget);
        labelElderYears->setObjectName(QStringLiteral("labelElderYears"));
        labelElderYears->setGeometry(QRect(894, 10, 391, 20));
        labelElderYears->setFont(font1);
        tableStudents = new QTableWidget(centralwidget);
        if (tableStudents->columnCount() < 4)
            tableStudents->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudents->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudents->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudents->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudents->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableStudents->setObjectName(QStringLiteral("tableStudents"));
        tableStudents->setGeometry(QRect(30, 50, 401, 501));
        tableStudents->setFont(font);
        tableStudents_2 = new QTableWidget(centralwidget);
        if (tableStudents_2->columnCount() < 4)
            tableStudents_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudents_2->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudents_2->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudents_2->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudents_2->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        tableStudents_2->setObjectName(QStringLiteral("tableStudents_2"));
        tableStudents_2->setGeometry(QRect(460, 50, 401, 501));
        tableStudents_2->setFont(font);
        tableStudents_3 = new QTableWidget(centralwidget);
        if (tableStudents_3->columnCount() < 4)
            tableStudents_3->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudents_3->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudents_3->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudents_3->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudents_3->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        tableStudents_3->setObjectName(QStringLiteral("tableStudents_3"));
        tableStudents_3->setGeometry(QRect(890, 50, 401, 501));
        tableStudents_3->setFont(font);
        labelTotalMinor = new QLabel(centralwidget);
        labelTotalMinor->setObjectName(QStringLiteral("labelTotalMinor"));
        labelTotalMinor->setGeometry(QRect(30, 570, 71, 21));
        labelTotalSame = new QLabel(centralwidget);
        labelTotalSame->setObjectName(QStringLiteral("labelTotalSame"));
        labelTotalSame->setGeometry(QRect(460, 570, 71, 21));
        labelTotalElder = new QLabel(centralwidget);
        labelTotalElder->setObjectName(QStringLiteral("labelTotalElder"));
        labelTotalElder->setGeometry(QRect(890, 570, 71, 21));
        pshBtrMilitancyAccept = new QPushButton(centralwidget);
        pshBtrMilitancyAccept->setObjectName(QStringLiteral("pshBtrMilitancyAccept"));
        pshBtrMilitancyAccept->setGeometry(QRect(600, 610, 121, 31));
        UfrmMilitancyUpdated->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(UfrmMilitancyUpdated);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        UfrmMilitancyUpdated->setStatusBar(statusbar);

        retranslateUi(UfrmMilitancyUpdated);

        QMetaObject::connectSlotsByName(UfrmMilitancyUpdated);
    } // setupUi

    void retranslateUi(QMainWindow *UfrmMilitancyUpdated)
    {
        UfrmMilitancyUpdated->setWindowTitle(QApplication::translate("UfrmMilitancyUpdated", "MainWindow", 0));
        labelMinorYears->setText(QApplication::translate("UfrmMilitancyUpdated", "Estudiantes cuyo a\303\261o de ingreso es anterior al especificado", 0));
        labelSameYear->setText(QApplication::translate("UfrmMilitancyUpdated", "Estudiantes cuyo a\303\261o de ingreso es igual al especificado", 0));
        labelElderYears->setText(QApplication::translate("UfrmMilitancyUpdated", "Estudiantes cuyo a\303\261o de ingreso es posterior al especificado", 0));
        QTableWidgetItem *___qtablewidgetitem = tableStudents->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("UfrmMilitancyUpdated", "CI", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableStudents->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("UfrmMilitancyUpdated", "Nombres ", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableStudents->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("UfrmMilitancyUpdated", "Apellidos", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableStudents->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("UfrmMilitancyUpdated", "Ingreso\n"
"UJC", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableStudents_2->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("UfrmMilitancyUpdated", "CI", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableStudents_2->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("UfrmMilitancyUpdated", "Nombres ", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableStudents_2->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("UfrmMilitancyUpdated", "Apellidos", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableStudents_2->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("UfrmMilitancyUpdated", "Ingreso\n"
"UJC", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableStudents_3->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("UfrmMilitancyUpdated", "CI", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableStudents_3->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("UfrmMilitancyUpdated", "Nombres ", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableStudents_3->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("UfrmMilitancyUpdated", "Apellidos", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableStudents_3->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("UfrmMilitancyUpdated", "Ingreso\n"
"UJC", 0));
        labelTotalMinor->setText(QApplication::translate("UfrmMilitancyUpdated", "Total: ", 0));
        labelTotalSame->setText(QApplication::translate("UfrmMilitancyUpdated", "Total: ", 0));
        labelTotalElder->setText(QApplication::translate("UfrmMilitancyUpdated", "Total: ", 0));
        pshBtrMilitancyAccept->setText(QApplication::translate("UfrmMilitancyUpdated", "Aceptar", 0));
    } // retranslateUi

};

namespace Ui {
    class UfrmMilitancyUpdated: public Ui_UfrmMilitancyUpdated {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UFRMMILITANCYUPDATED_H
