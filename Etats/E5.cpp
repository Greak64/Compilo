/*
 * E5.cpp
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#include "E5.h"

bool E5::transition(Automate& automate, Symbole * symbole)
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
