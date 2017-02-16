/*
 * E4.h
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#ifndef E4_H_
#define E4_H_

#include "Etat.h"

class E4 : public Etat
{
public:
	E4() : Etat("Etat_0"){};
	~E4() = default;
	bool transition(Automate & automate, Symbole * symbole);
};

#endif /* E4_H_ */
