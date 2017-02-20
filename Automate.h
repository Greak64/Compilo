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

    Symbole* popSymbole();
    void popEtDetruireSymbole();

    // Permet d'indiquer que l'expression entrée a pu être analysée sans erreur de syntaxe
    void termineSansErreur();

    void lancer(); // Lance l'analyse de l'expression entrée
	void decalage(Symbole * symbole, Etat * etat);
    void reduction(int n, Symbole * symbole);

private:
	std::vector<Symbole *> pileSymboles;
	std::vector<Etat *> pileEtats;

	Lexer lex;
    bool aRencontreUneErreur; // 'true' s'il y a une erreur de syntaxe
};

#endif /* AUTOMATE_H_ */
