/*
 * Automate.cpp
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#include "Automate.h"
#include "Etat.h"
#include "Etats/E0.h"

Automate::Automate()
{
	pileEtats.push_back(new E0());
}

Automate::~Automate()
{
	for(auto e : pileEtats) delete e;
	for(auto s : pileSymboles) delete s;
}

Symbole* Automate::popSymbole()
{
    Symbole* back = pileSymboles.back();
    pileSymboles.pop_back();
    return back;
}

void Automate::popEtDetruireSymbole()
{
    delete pileSymboles.back();
    pileSymboles.pop_back();
}

void Automate::lancer()
{
	Symbole * symbole = lex.prochainSymbole();
	if(symbole != nullptr)
	{
		if(pileEtats.back()->transition(*this, symbole))
		{

		}
		else
		{

		}
	}
}

void Automate::decalage(Symbole* symbole, Etat* etat)
{
	pileSymboles.push_back(symbole);
	pileEtats.push_back(etat);
}

void Automate::reduction(int n, Symbole* symbole)
{
    for (int i = 0; i < n; ++i)
    {
        delete pileEtats.back();
        pileEtats.pop_back();
    }
    //pileSymboles.push_back(symbole);
}

