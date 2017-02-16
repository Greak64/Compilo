/*
 * E1.cpp
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#include "E1.h"

bool E1::transition(Automate& automate, Symbole * symbole)
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
