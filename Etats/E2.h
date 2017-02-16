/*
 * E2.h
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#ifndef E2_H_
#define E2_H_

#include "Etat.h"

class E2 : public Etat
{
public:
	E2() : Etat("Etat_0"){};
	~E2() = default;
	bool transition(Automate & automate, Symbole * symbole);
};

#endif /* E2_H_ */
