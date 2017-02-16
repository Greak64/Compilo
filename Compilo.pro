TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Automate.cpp \
    Lexer.cpp \
    Nombre.cpp \
    Symbole.cpp \
    Etats/E0.cpp \
    Etats/E1.cpp \
    Etats/E2.cpp \
    Etats/E3.cpp \
    Etats/E4.cpp \
    Etats/E5.cpp \
    Etats/E6.cpp \
    Etats/E7.cpp \
    Etats/E8.cpp \
    Etats/E9.cpp

HEADERS += \
    Automate.h \
    Etat.h \
    Expr.h \
    Lexer.h \
    Nombre.h \
    Symbole.h \
    Etats/E0.h \
    Etats/E1.h \
    Etats/E2.h \
    Etats/E3.h \
    Etats/E4.h \
    Etats/E5.h \
    Etats/E6.h \
    Etats/E7.h \
    Etats/E8.h \
    Etats/E9.h
