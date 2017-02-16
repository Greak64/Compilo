/*
 * E4.cpp
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#include "E4.h"
#include "E2.h"
#include "E3.h"
#include "E7.h"

bool E4::transition(Automate& automate, Symbole * symbole)
{
	switch(symbole->getId())
	{
    case Symbole::NOMBRE :
        automate.decalage(symbole, new E3);
		break;
    case Symbole::PAR_OUVRANT :
        automate.decalage(symbole, new E2);
		break;
    case Symbole::EXPR :
        automate.decalage(symbole, new E7);
		break;
	default :
		break;
	}
	return true;
}
