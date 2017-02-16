/*
 * Lexer.h
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#ifndef LEXER_H_
#define LEXER_H_

#include "Symbole.h"

#include <string>

class Lexer {
public:
	Lexer();
	~Lexer() = default;

	Symbole * prochainSymbole();
    void ajouterSymbole(Symbole *symbole);
    void lecture();
    bool setFlux(std::string stream);

private:
    std::string flux;
	unsigned int lectureFlux; // Premier caractère non lu
	unsigned int consomFlux; // Premier caractère non consommé
	Symbole * prochain;

    char token;

    bool analyseToken();
    bool nextToken();




};

#endif /* LEXER_H_ */
