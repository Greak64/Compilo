/*
 * E5.h
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#ifndef E5_H_
#define E5_H_

#include "Etat.h"

class E5 : public Etat
{
public:
	E5() : Etat("Etat_0"){};
	~E5() = default;
	bool transition(Automate & automate, Symbole * symbole);
};

#endif /* E5_H_ */
