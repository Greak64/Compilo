/*
 * Nombre.h
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#ifndef NOMBRE_H_
#define NOMBRE_H_

#include "Symbole.h"

class Nombre : public Symbole
{

public:
	Nombre(int pvaleur);
	virtual ~Nombre();

protected:
	int valeur;
};

#endif /* NOMBRE_H_ */
