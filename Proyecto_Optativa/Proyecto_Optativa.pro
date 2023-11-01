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
    UfrmDialogYear.cpp \
    UYearDonation.cpp \
    UYearMilitancy.cpp
    UfrmMilitancyUpdated.cpp \
    UfrmDonationUpdated.cpp

HEADERS  += \
    UfrmDialogInsert.h \
    UfrmMain.h \
    UfrmDialogYear.h \
    utils.h \
    UYearMilitancy.h \
    UYearDonation.h
    UfrmMilitancyUpdated.h \
    UfrmDonationUpdated.h

FORMS    += \
    UfrmDialogInsert.ui \
    UfrmMain.ui \
    UfrmDialogYear.ui
    UfrmMilitancyUpdated.ui \
    UfrmDonationUpdated.ui


