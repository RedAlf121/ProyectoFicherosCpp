/********************************************************************************
** Form generated from reading UI file 'UfrmMilitancyUpdated.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
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
    QLabel *labelMinorYearsMilitancy;
    QLabel *labelSameYearMilitancy;
    QLabel *labelElderYearsMilitancy;
    QTableWidget *tableStudentsMinorMilitancy;
    QTableWidget *tableStudentsSameMilitancy;
    QTableWidget *tableStudentsElderMilitancy;
    QLabel *labelTotalMinorMilitancy;
    QLabel *labelTotalSameMilitancy;
    QLabel *labelTotalElderMilitancy;
    QPushButton *pushAcceptMilitancy;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UfrmMilitancyUpdated)
    {
        if (UfrmMilitancyUpdated->objectName().isEmpty())
            UfrmMilitancyUpdated->setObjectName(QStringLiteral("UfrmMilitancyUpdated"));
        UfrmMilitancyUpdated->resize(1322, 691);
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(12);
        UfrmMilitancyUpdated->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/militant_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        UfrmMilitancyUpdated->setWindowIcon(icon);
        centralwidget = new QWidget(UfrmMilitancyUpdated);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        labelMinorYearsMilitancy = new QLabel(centralwidget);
        labelMinorYearsMilitancy->setObjectName(QStringLiteral("labelMinorYearsMilitancy"));
        labelMinorYearsMilitancy->setGeometry(QRect(30, 10, 401, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        font1.setPointSize(10);
        labelMinorYearsMilitancy->setFont(font1);
        labelMinorYearsMilitancy->setAlignment(Qt::AlignCenter);
        labelSameYearMilitancy = new QLabel(centralwidget);
        labelSameYearMilitancy->setObjectName(QStringLiteral("labelSameYearMilitancy"));
        labelSameYearMilitancy->setGeometry(QRect(464, 10, 391, 20));
        labelSameYearMilitancy->setFont(font1);
        labelSameYearMilitancy->setAlignment(Qt::AlignCenter);
        labelElderYearsMilitancy = new QLabel(centralwidget);
        labelElderYearsMilitancy->setObjectName(QStringLiteral("labelElderYearsMilitancy"));
        labelElderYearsMilitancy->setGeometry(QRect(894, 10, 391, 20));
        labelElderYearsMilitancy->setFont(font1);
        labelElderYearsMilitancy->setAlignment(Qt::AlignCenter);
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
        tableStudentsSameMilitancy = new QTableWidget(centralwidget);
        if (tableStudentsSameMilitancy->columnCount() < 4)
            tableStudentsSameMilitancy->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudentsSameMilitancy->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudentsSameMilitancy->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudentsSameMilitancy->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudentsSameMilitancy->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        tableStudentsSameMilitancy->setObjectName(QStringLiteral("tableStudentsSameMilitancy"));
        tableStudentsSameMilitancy->setGeometry(QRect(460, 50, 401, 501));
        tableStudentsSameMilitancy->setFont(font);
        tableStudentsElderMilitancy = new QTableWidget(centralwidget);
        if (tableStudentsElderMilitancy->columnCount() < 4)
            tableStudentsElderMilitancy->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudentsElderMilitancy->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudentsElderMilitancy->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudentsElderMilitancy->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudentsElderMilitancy->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        tableStudentsElderMilitancy->setObjectName(QStringLiteral("tableStudentsElderMilitancy"));
        tableStudentsElderMilitancy->setGeometry(QRect(890, 50, 401, 501));
        tableStudentsElderMilitancy->setFont(font);
        labelTotalMinorMilitancy = new QLabel(centralwidget);
        labelTotalMinorMilitancy->setObjectName(QStringLiteral("labelTotalMinorMilitancy"));
        labelTotalMinorMilitancy->setGeometry(QRect(30, 570, 71, 21));
        labelTotalSameMilitancy = new QLabel(centralwidget);
        labelTotalSameMilitancy->setObjectName(QStringLiteral("labelTotalSameMilitancy"));
        labelTotalSameMilitancy->setGeometry(QRect(460, 570, 71, 21));
        labelTotalElderMilitancy = new QLabel(centralwidget);
        labelTotalElderMilitancy->setObjectName(QStringLiteral("labelTotalElderMilitancy"));
        labelTotalElderMilitancy->setGeometry(QRect(890, 570, 71, 21));
        pushAcceptMilitancy = new QPushButton(centralwidget);
        pushAcceptMilitancy->setObjectName(QStringLiteral("pushAcceptMilitancy"));
        pushAcceptMilitancy->setGeometry(QRect(610, 620, 121, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral("Resources/accept_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushAcceptMilitancy->setIcon(icon1);
        pushAcceptMilitancy->setIconSize(QSize(32, 32));
        UfrmMilitancyUpdated->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(UfrmMilitancyUpdated);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        UfrmMilitancyUpdated->setStatusBar(statusbar);

        retranslateUi(UfrmMilitancyUpdated);

        QMetaObject::connectSlotsByName(UfrmMilitancyUpdated);
    } // setupUi

    void retranslateUi(QMainWindow *UfrmMilitancyUpdated)
    {
        UfrmMilitancyUpdated->setWindowTitle(QApplication::translate("UfrmMilitancyUpdated", "Ingreso militancia", 0));
        labelMinorYearsMilitancy->setText(QApplication::translate("UfrmMilitancyUpdated", "Estudiantes cuyo a\303\261o de ingreso es anterior al especificado", 0));
        labelSameYearMilitancy->setText(QApplication::translate("UfrmMilitancyUpdated", "Estudiantes cuyo a\303\261o de ingreso es igual al especificado", 0));
        labelElderYearsMilitancy->setText(QApplication::translate("UfrmMilitancyUpdated", "Estudiantes cuyo a\303\261o de ingreso es posterior al especificado", 0));
        QTableWidgetItem *___qtablewidgetitem = tableStudentsMinorMilitancy->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("UfrmMilitancyUpdated", "CI", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableStudentsMinorMilitancy->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("UfrmMilitancyUpdated", "Nombres ", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableStudentsMinorMilitancy->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("UfrmMilitancyUpdated", "Apellidos", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableStudentsMinorMilitancy->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("UfrmMilitancyUpdated", "Ingreso\n"
"UJC", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableStudentsSameMilitancy->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("UfrmMilitancyUpdated", "CI", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableStudentsSameMilitancy->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("UfrmMilitancyUpdated", "Nombres ", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableStudentsSameMilitancy->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("UfrmMilitancyUpdated", "Apellidos", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableStudentsSameMilitancy->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("UfrmMilitancyUpdated", "Ingreso\n"
"UJC", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableStudentsElderMilitancy->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("UfrmMilitancyUpdated", "CI", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableStudentsElderMilitancy->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("UfrmMilitancyUpdated", "Nombres ", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableStudentsElderMilitancy->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("UfrmMilitancyUpdated", "Apellidos", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableStudentsElderMilitancy->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("UfrmMilitancyUpdated", "Ingreso\n"
"UJC", 0));
        labelTotalMinorMilitancy->setText(QApplication::translate("UfrmMilitancyUpdated", "Total: ", 0));
        labelTotalSameMilitancy->setText(QApplication::translate("UfrmMilitancyUpdated", "Total: ", 0));
        labelTotalElderMilitancy->setText(QApplication::translate("UfrmMilitancyUpdated", "Total: ", 0));
        pushAcceptMilitancy->setText(QApplication::translate("UfrmMilitancyUpdated", "&Aceptar", 0));
    } // retranslateUi

};

namespace Ui {
    class UfrmMilitancyUpdated: public Ui_UfrmMilitancyUpdated {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UFRMMILITANCYUPDATED_H
