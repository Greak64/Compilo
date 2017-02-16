/*
 * E7.h
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#ifndef E7_H_
#define E7_H_

#include "Etat.h"

class E7 : public Etat
{
public:
	E7() : Etat("Etat_0"){};
	~E7() = default;
	bool transition(Automate & automate, Symbole * symbole);
};

#endif /* E7_H_ */
