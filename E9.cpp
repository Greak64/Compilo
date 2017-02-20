/*
 * E9.cpp
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#include "E9.h"
#include "ExprPar.h"

bool E9::transition(Automate& automate, Symbole * symbole)
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

    automate.popEtDetruireSymbole();
    Expr * exp = (Expr *) automate.popSymbole();
    automate.popEtDetruireSymbole();
    automate.reduction(3, new ExprPar(exp));

    return true;
}
