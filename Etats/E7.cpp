/*
 * E7.cpp
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#include "E7.h"
#include "E5.h"
#include "Expr.h"
#include "Expr/ExprPlus.h"

bool E7::transition(Automate& automate, Symbole * symbole)
{
	switch(symbole->getId())
    {
	case Symbole::MULT :
        automate.decalage(symbole, new E5);
        break;
	default :
        //Expr *s1 = automate.popSymbole();
        //automate.popEtDetruireSymbole();
        //Expr *s2 = automate.popSymbole();
        //automate.reduction(3, new ExprPlus(s1, s2));
		break;
	}
	return true;
}
