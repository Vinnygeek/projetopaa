#-------------------------------------------------
#
# Project created by QtCreator 2019-05-31T09:51:29
#
#-------------------------------------------------

QT       += core gui
QT       += xml
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = projetopaa
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        telainicial.cpp \
    telaaluno.cpp \
    telacoordenador.cpp \
    telaaprovadas.cpp \
    telareprovadas.cpp \
    disciplina.cpp \
    grade.cpp \
    grafo.cpp \
    vertice.cpp \
    aresta.cpp \
    grafo2.cpp \
    gradeperfil.cpp \
    disciplinaperfil.cpp \
    grafo3.cpp

HEADERS += \
        telainicial.h \
    telaaluno.h \
    telacoordenador.h \
    telaaprovadas.h \
    telareprovadas.h \
    disciplina.h \
    grade.h \
    grafo.h \
    vertice.h \
    aresta.h \
    grafo2.h \
    gradeperfil.h \
    disciplinaperfil.h \
    grafo3.h

FORMS += \
        telainicial.ui \
    telaaluno.ui \
    telacoordenador.ui \
    telaaprovadas.ui \
    telareprovadas.ui
