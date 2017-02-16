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
	case Symbole::NOMBRE :
		automate.decalage(symbole, new E3);
		break;
	default :
		break;
	}
	return true;
}
