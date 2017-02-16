/*
 * Symbole.cpp
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#include "Symbole.h"
#include <iostream>

Symbole::Symbole(Type aid) : id(aid)
{}

Symbole::Symbole(char token)
{
    switch(token)
    {
    case '+':
        id = PLUS;
        break;
    case '*':
        id = MULT;
        break;
    case '(':
        id = PAR_OUVRANT;
        break;
    case ')':
        id = PAR_FERMANT;
        break;
    }
}

Symbole::~Symbole() {}

void Symbole::print() const
{
    switch(id)
    {case VAL:
        std::cout << " val ";
        break;
    case EXPR:
        std::cout << " E ";
        break;
    case PAR_OUVRANT:
        std::cout << " ( ";
        break;
    case PAR_FERMANT:
        std::cout << " ) ";
        break;
    case MULT:
        std::cout << " * ";
        break;
    case PLUS:
        std::cout << " + ";
        break;
    case END:
        std::cout << " $ ";
        break;
    }
}

Symbole::operator int() const
{
    return id;
}

Symbole::Type Symbole::getId() const
{
    return id;
}


