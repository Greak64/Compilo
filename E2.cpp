/*
 * E2.cpp
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#include "E2.h"
#include "E3.h"
#include "E6.h"

bool E2::transition(Automate& automate, Symbole * symbole)
{
	switch(symbole->getId())
	{
    case Symbole::VAL :
        automate.decalage(symbole, new E3);
		break;
    case Symbole::PAR_OUVRANT :
        automate.decalage(symbole, new E2);
		break;
    case Symbole::EXPR :
        automate.decalage(symbole, new E6);
		break;
    default :
        std::cout << "Error : transition not handled with state " << name << " and symbol ";
        symbole->print();
        std::cout << std::endl;
        delete symbole;
        return false;
        break;
	}
	return true;
}
