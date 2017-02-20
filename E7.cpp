/*
 * E7.cpp
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#include "E7.h"
#include "E5.h"
#include "Expr.h"
#include "ExprPlus.h"

bool E7::transition(Automate& automate, Symbole * symbole)
{
    auto tmp = symbole->getId();

    if(tmp == Symbole::MULT)
    {
        automate.decalage(symbole, new E5);
    }
    else if(tmp == Symbole::PLUS ||
            tmp == Symbole::PAR_FERMANT ||
            tmp == Symbole::END)
    {
        Expr * s1 = (Expr*) automate.popSymbole();
        automate.popEtDetruireSymbole();
        Expr * s2 = (Expr*) automate.popSymbole();
        automate.reduction(3, new ExprPlus(s1, s2));
    }
    else
    {
        std::cout << "Error : transition not handled with state " << name << " and symbol ";
        symbole->print();
        std::cout << std::endl;
        delete symbole;
        return false;
    }

	return true;
}
