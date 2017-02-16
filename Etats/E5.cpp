/*
 * E5.cpp
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#include "E5.h"
#include "E2.h"
#include "E3.h"
#include "E8.h"

bool E5::transition(Automate& automate, Symbole * symbole)
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
        automate.decalage(symbole, new E8);
        break;
    default :
        std::cout << "Error non handle transition " << name << " ";
        symbole->print();
        std::cout<< std::endl;
        return false;
        break;
    }
	return true;
}
