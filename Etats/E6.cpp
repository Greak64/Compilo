/*
 * E6.cpp
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#include "E6.h"
#include "E4.h"
#include "E5.h"
#include "E9.h"

bool E6::transition(Automate& automate, Symbole * symbole)
{
	switch(symbole->getId())
	{
    case Symbole::PLUS :
        automate.decalage(symbole, new E4);
		break;
	case Symbole::MULT :
        automate.decalage(symbole, new E5);
		break;
    case Symbole::PAR_FERMANT :
        automate.decalage(symbole, new E9);
		break;
	default :
		break;
	}
	return true;
}
