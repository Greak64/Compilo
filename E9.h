/*
 * E9.h
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#ifndef E9_H_
#define E9_H_

#include "Etat.h"

class E9 : public Etat
{
public:
    E9() : Etat("Etat_9"){}
	~E9() = default;
	bool transition(Automate & automate, Symbole * symbole);
};

#endif /* E9_H_ */
