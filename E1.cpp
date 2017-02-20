/*
 * E1.cpp
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#include "E1.h"
#include "E4.h"
#include "E5.h"

bool E1::transition(Automate& automate, Symbole * symbole)
{
	switch(symbole->getId())
	{
    case Symbole::PLUS :
        automate.decalage(symbole, new E4);
		break;
	case Symbole::MULT :
        automate.decalage(symbole, new E5);
        break;
    case Symbole::END :
        delete symbole;
        automate.termineSansErreur(); // Il n'y a pas eu d'erreur de syntaxe
        return false; // On accepte !
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
