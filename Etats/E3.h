/*
 * E3.h
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#ifndef E3_H_
#define E3_H_

#include "Etat.h"

class E3 : public Etat
{
public:
    E3() : Etat("Etat_3"){}
	~E3() = default;
	bool transition(Automate & automate, Symbole * symbole);
};

#endif /* E3_H_ */
