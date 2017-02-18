/*
 * E9.cpp
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#include "E9.h"
#include "Expr/ExprPar.h"

bool E9::transition(Automate& automate, Symbole * symbole)
{
    auto tmp = symbole->getId();
    if(tmp == Symbole::VAL || tmp == Symbole::PAR_OUVRANT)
    {
        std::cout << "Error non handle transition " << name << " ";
        symbole->print();
        std::cout<< std::endl;
        return false;
    }

    automate.popEtDetruireSymbole();
    Expr * exp = (Expr *) automate.popSymbole();
    automate.popEtDetruireSymbole();
    automate.reduction(3,new ExprPar(exp));

    return true;
}
