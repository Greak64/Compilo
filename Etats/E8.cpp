/*
 * E8.cpp
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#include "E8.h"
#include "Expr/ExprMult.h"

bool E8::transition(Automate& automate, Symbole * symbole)
{
    auto tmp = symbole->getId();
    if(tmp == Symbole::VAL || tmp == Symbole::PAR_OUVRANT)
    {
        std::cout << "Error non handle transition " << name << " ";
        symbole->print();
        std::cout<< std::endl;
        return false;
    }

    Expr * s1 = (Expr*) automate.popSymbole();
    automate.popEtDetruireSymbole();
    Expr * s2 = (Expr*) automate.popSymbole();
    automate.reduction(3, new ExprMult(s1, s2));

    return true;
}
