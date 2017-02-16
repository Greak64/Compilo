/*
 * E6.h
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#ifndef E6_H_
#define E6_H_

#include "Etat.h"

class E6 : public Etat
{
public:
	E6() : Etat("Etat_0"){};
	~E6() = default;
	bool transition(Automate & automate, Symbole * symbole);
};

#endif /* E6_H_ */
