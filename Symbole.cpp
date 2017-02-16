/*
 * Symbole.cpp
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#include "Symbole.h"
#include <iostream>

Symbole::Symbole(Type aid) : id(aid)
{}

Symbole::Symbole(char token)
{
	switch(token)
	{
	case '+':
		id = PLUS;
		break;
	case '*':
		id = MULT;
		break;
	case '(':
		id = PAR_OUVRANT;
		break;
	case ')':
		id = PAR_FERMANT;
		break;
	}
}

Symbole::~Symbole() {}

void Symbole::print()
{
	std::cout << id << std::endl;
}

Symbole::operator int() const
{
	return id;
}

Symbole::Type Symbole::getId() const
{
		return id;
}


