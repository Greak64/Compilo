/*
 * Symbole.h
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#ifndef SYMBOLE_H_
#define SYMBOLE_H_

class Symbole {
public:

	enum Type {
		NOMBRE,
		EXPR,
		PAR_OUVRANT,
		PAR_FERMANT,
		MULT,
		PLUS
	};

	Symbole(Type id);
	Symbole(char token);
	virtual ~Symbole();

	void print();
	operator int() const;

	Type getId() const;

protected:
	Type id;
};

#endif /* SYMBOLE_H_ */
