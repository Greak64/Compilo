/*
 * E3.cpp
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#include "E3.h"
#include "Expr.h"
#include "Nombre.h"

bool E3::transition(Automate& automate, Symbole * symbole)
{
    auto tmp = symbole->getId();
    if(tmp == Symbole::VAL || tmp == Symbole::PAR_OUVRANT)
    {
        std::cout << "Error : transition not handled with state " << name << " and symbol ";
        symbole->print();
        std::cout << std::endl;
        delete symbole;
        return false;
    }

    Nombre * nombre = (Nombre *) automate.popSymbole();;
    automate.reduction(1, new Expr(nombre->getValeur()));
    delete nombre;

    return true;
}
