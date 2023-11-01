#-------------------------------------------------
#
# Project created by QtCreator 2023-10-21T18:15:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Proyecto_Optativa
TEMPLATE = app


SOURCES += main.cpp\
    UfrmDialogInsert.cpp \
    UfrmMain.cpp \
    UfrmMilitancyUpdated.cpp \
    UfrmDonationUpdated.cpp \
    UfrmDialogYear.cpp \
    UYearDonation.cpp \
    UYearMilitancy.cpp

HEADERS  += \
    UfrmDialogInsert.h \
    UfrmMain.h \
    UfrmMilitancyUpdated.h \
    UfrmDonationUpdated.h \
    UfrmDialogYear.h \
    utils.h \
    UYearDonation.h \
    UYearMilitancy.h

FORMS    += \
    UfrmDialogInsert.ui \
    UfrmMain.ui \
    UfrmMilitancyUpdated.ui \
    UfrmDonationUpdated.ui \
    UfrmDialogYear.ui


