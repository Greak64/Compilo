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
	void lecture();

protected:
	std::string flux;
	unsigned int lectureFlux; // Premier caractère non lu
	unsigned int consomFlux; // Premier caractère non consommé
	Symbole * prochain;
};

#endif /* LEXER_H_ */
