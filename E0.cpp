/*
 * E0.cpp
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#include "E0.h"
#include "E1.h"
#include "E3.h"
#include "E2.h"
#include <iostream>

bool E0::transition(Automate& automate, Symbole * symbole)
{
	switch(symbole->getId())
	{
	case Symbole::EXPR :
        automate.decalage(symbole, new E1);
		break;
	case Symbole::PAR_OUVRANT :
        automate.decalage(symbole, new E2);
		break;
    case Symbole::VAL :
        automate.decalage(symbole, new E3);
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
