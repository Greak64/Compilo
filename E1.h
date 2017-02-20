/*
 * E1.h
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#ifndef E1_H_
#define E1_H_

#include "Etat.h"

class E1 : public Etat
{
public:
    E1() : Etat("Etat_1"){}
	~E1() = default;
	bool transition(Automate & automate, Symbole * symbole);
};

#endif /* E1_H_ */
