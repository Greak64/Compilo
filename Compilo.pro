TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Automate.cpp \
    Lexer.cpp \
    Symbole.cpp \
    Nombre.cpp \
    Etat.cpp \
    Expr.cpp \
    E0.cpp \
    E1.cpp \
    E2.cpp \
    E3.cpp \
    E4.cpp \
    E5.cpp \
    E6.cpp \
    E7.cpp \
    E8.cpp \
    E9.cpp \
    ExprMult.cpp \
    ExprPar.cpp \
    ExprPlus.cpp

HEADERS += \
    Automate.h \
    Etat.h \
    Expr.h \
    Lexer.h \
    Nombre.h \
    Symbole.h \
    E0.h \
    E1.h \
    E2.h \
    E3.h \
    E4.h \
    E5.h \
    E6.h \
    E7.h \
    E8.h \
    E9.h \
    ExprMult.h \
    ExprPar.h \
    ExprPlus.h
