/*
 * E8.h
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#ifndef E8_H_
#define E8_H_

#include "Etat.h"

class E8 : public Etat
{
public:
	E8() : Etat("Etat_0"){};
	~E8() = default;
	bool transition(Automate & automate, Symbole * symbole);
};

#endif /* E8_H_ */
