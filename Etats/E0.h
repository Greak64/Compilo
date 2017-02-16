/*
 * E0.h
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#ifndef E0_H_
#define E0_H_

#include "Etat.h"

class E0 : public Etat
{
public:
	E0() : Etat("Etat_0"){};
	~E0() = default;
	bool transition(Automate & automate, Symbole * symbole);
};

#endif /* E0_H_ */
