/*
 * E3.cpp
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#include "E3.h"

bool E3::transition(Automate& automate, Symbole * symbole)
{
    switch(symbole->getId())
    {
    case Symbole::PLUS :
    case Symbole::MULT :
    case Symbole::PAR_FERMANT :
    case Symbole::END :
        automate.reduction(1,new Symbole(Symbole::EXPR));
        break;
    default :
        std::cout << "Error non handle transition " << name << " ";
        symbole->print();
        std::cout<< std::endl;
        return false;
    }
    return true;

}
