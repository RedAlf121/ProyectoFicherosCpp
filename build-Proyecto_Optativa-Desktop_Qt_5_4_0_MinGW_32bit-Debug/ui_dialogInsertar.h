/********************************************************************************
** Form generated from reading UI file 'dialogInsertar.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGINSERTAR_H
#define UI_DIALOGINSERTAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialogInsertar
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QGroupBox *gboxDatos;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineNombre;
    QLineEdit *lineCI;
    QLineEdit *lineApellidos;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *lblNombres;
    QLabel *lblApellidos;
    QLabel *lblCI;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *lblGrupo;
    QSpinBox *spinBox_3;
    QLabel *lblUJC;
    QSpinBox *spinBox;
    QLabel *lblDonation;
    QSpinBox *spinBox_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnAceptar;
    QPushButton *btnCancelar;

    void setupUi(QDialog *dialogInsertar)
    {
        if (dialogInsertar->objectName().isEmpty())
            dialogInsertar->setObjectName(QStringLiteral("dialogInsertar"));
        dialogInsertar->resize(546, 376);
        verticalLayout = new QVBoxLayout(dialogInsertar);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gboxDatos = new QGroupBox(dialogInsertar);
        gboxDatos->setObjectName(QStringLiteral("gboxDatos"));
        verticalLayoutWidget = new QWidget(gboxDatos);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(210, 30, 271, 131));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineNombre = new QLineEdit(verticalLayoutWidget);
        lineNombre->setObjectName(QStringLiteral("lineNombre"));

        verticalLayout_2->addWidget(lineNombre);

        lineCI = new QLineEdit(verticalLayoutWidget);
        lineCI->setObjectName(QStringLiteral("lineCI"));

        verticalLayout_2->addWidget(lineCI);

        lineApellidos = new QLineEdit(verticalLayoutWidget);
        lineApellidos->setObjectName(QStringLiteral("lineApellidos"));

        verticalLayout_2->addWidget(lineApellidos);

        verticalLayoutWidget_2 = new QWidget(gboxDatos);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(40, 40, 160, 111));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lblNombres = new QLabel(verticalLayoutWidget_2);
        lblNombres->setObjectName(QStringLiteral("lblNombres"));

        verticalLayout_3->addWidget(lblNombres);

        lblApellidos = new QLabel(verticalLayoutWidget_2);
        lblApellidos->setObjectName(QStringLiteral("lblApellidos"));

        verticalLayout_3->addWidget(lblApellidos);

        lblCI = new QLabel(verticalLayoutWidget_2);
        lblCI->setObjectName(QStringLiteral("lblCI"));

        verticalLayout_3->addWidget(lblCI);

        horizontalLayoutWidget = new QWidget(gboxDatos);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 170, 480, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblGrupo = new QLabel(horizontalLayoutWidget);
        lblGrupo->setObjectName(QStringLiteral("lblGrupo"));

        horizontalLayout->addWidget(lblGrupo);

        spinBox_3 = new QSpinBox(horizontalLayoutWidget);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setMinimum(11);
        spinBox_3->setMaximum(42);

        horizontalLayout->addWidget(spinBox_3);

        lblUJC = new QLabel(horizontalLayoutWidget);
        lblUJC->setObjectName(QStringLiteral("lblUJC"));

        horizontalLayout->addWidget(lblUJC);

        spinBox = new QSpinBox(horizontalLayoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(2000);
        spinBox->setMaximum(2023);

        horizontalLayout->addWidget(spinBox);

        lblDonation = new QLabel(horizontalLayoutWidget);
        lblDonation->setObjectName(QStringLiteral("lblDonation"));

        horizontalLayout->addWidget(lblDonation);

        spinBox_2 = new QSpinBox(horizontalLayoutWidget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMinimum(2000);
        spinBox_2->setMaximum(2023);

        horizontalLayout->addWidget(spinBox_2);

        horizontalLayoutWidget_2 = new QWidget(gboxDatos);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(299, 270, 161, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnAceptar = new QPushButton(horizontalLayoutWidget_2);
        btnAceptar->setObjectName(QStringLiteral("btnAceptar"));

        horizontalLayout_2->addWidget(btnAceptar);

        btnCancelar = new QPushButton(horizontalLayoutWidget_2);
        btnCancelar->setObjectName(QStringLiteral("btnCancelar"));

        horizontalLayout_2->addWidget(btnCancelar);


        gridLayout->addWidget(gboxDatos, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(dialogInsertar);

        QMetaObject::connectSlotsByName(dialogInsertar);
    } // setupUi

    void retranslateUi(QDialog *dialogInsertar)
    {
        dialogInsertar->setWindowTitle(QApplication::translate("dialogInsertar", "Dialog", 0));
        gboxDatos->setTitle(QApplication::translate("dialogInsertar", "Introduzca los datos correspondientes", 0));
        lblNombres->setText(QApplication::translate("dialogInsertar", "<html><head/><body><p align=\"right\">Nombre(s):</p></body></html>", 0));
        lblApellidos->setText(QApplication::translate("dialogInsertar", "<html><head/><body><p align=\"right\">Apellidos:</p></body></html>", 0));
        lblCI->setText(QApplication::translate("dialogInsertar", "<html><head/><body><p align=\"right\">Carnet de Identidad:</p></body></html>", 0));
        lblGrupo->setText(QApplication::translate("dialogInsertar", "<html><head/><body><p align=\"right\">IF-</p></body></html>", 0));
        lblUJC->setText(QApplication::translate("dialogInsertar", "<html><head/><body><p align=\"right\">A\303\261o Ingreso UJC:</p></body></html>", 0));
        lblDonation->setText(QApplication::translate("dialogInsertar", "<html><head/><body><p align=\"right\">A\303\261o Primera Donaci\303\263n:</p></body></html>", 0));
        btnAceptar->setText(QApplication::translate("dialogInsertar", "&Aceptar", 0));
        btnCancelar->setText(QApplication::translate("dialogInsertar", "&Cancelar", 0));
    } // retranslateUi

};

namespace Ui {
    class dialogInsertar: public Ui_dialogInsertar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGINSERTAR_H
