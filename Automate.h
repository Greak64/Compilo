/*
 * Automate.h
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#ifndef AUTOMATE_H_
#define AUTOMATE_H_

#include "Lexer.h"
#include <vector>
#include <iostream>

class Etat;

class Automate {
public:
	Automate();
	~Automate();

	void lancer();
	void decalage(Symbole * symbole, Etat * etat);
	void reduction(int n, Symbole * symbole);

private:
	std::vector<Symbole *> pileSymboles;
	std::vector<Etat *> pileEtats;

	Lexer lex;
};

#endif /* AUTOMATE_H_ */
