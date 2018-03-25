#-------------------------------------------------
#
# Project created by QtCreator 2017-10-28T08:50:32
#
#-------------------------------------------------

QT       += core gui 3dcore

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

TARGET = notes
TEMPLATE = app


SOURCES += main.cpp\
    mainwindow.cpp \
    renderarea.cpp \
    main.cpp \
    mainwindow.cpp \
    renderarea.cpp \
    objectreader.cpp \
    notesapplication.cpp

HEADERS  += mainwindow.h \
    renderarea.h \
    enums.h \
    objects/accidental.h \
    objects/clef.h \
    objects/line.h \
    objects/meta.h \
    objects/note.h \
    objects/octaveshift.h \
    objects/pedal.h \
    objects/repetition.h \
    objects/rest.h \
    objects/tempo.h \
    objects/text.h \
    objects/time.h \
    renderobjects/clefro.h \
    renderobjects/linero.h \
    renderobjects/notero.h \
    renderobjects/restro.h \
    renderobjects/staffro.h \
    renderobjects/staffseparatorro.h \
    enums.h \
    mainwindow.h \
    objectreader.h \
    renderarea.h \
    objects/iobjectgenerator.h \
    notesapplication.h \
    renderobjects/musicrenderobject.h \
    renderobjects/iobjectconsumer.h \
    objectproducer.h \
    objectconsumer.h \
    objectpcbase.h \
    objects/notationobject.h

FORMS    += mainwindow.ui \
    mainwindow.ui
