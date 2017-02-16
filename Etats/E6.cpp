/*
 * E6.cpp
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#include "E6.h"

bool E6::transition(Automate& automate, Symbole * symbole)
{
	switch(symbole->getId())
	{
	case Symbole::EXPR :
		break;
	case Symbole::MULT :
		break;
	case Symbole::NOMBRE :
		break;
	default :
		break;
	}
	return true;
}
