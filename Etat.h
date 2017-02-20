/*
 * Etat.h
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#ifndef ETAT_H_
#define ETAT_H_

#include "Automate.h"
#include <string>
#include <iostream>

class Etat {
public:
    Etat(std::string pname);
	virtual ~Etat() = default;
    void print() const;
	virtual bool transition(Automate & automate, Symbole * symbole) = 0;

protected:
    std::string name; // Nom de l'état (ex : "Etat_1")
};

#endif /* ETAT_H_ */
