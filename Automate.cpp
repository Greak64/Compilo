/*
 * Automate.cpp
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#include "Automate.h"
#include "Etat.h"
#include "Etats/E0.h"
#include "Expr.h"

#include <iostream>
#include <string>

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
    std::string chaine;
    std::getline(std::cin,chaine);

    bool run = lex.setFlux(chaine);

    lex.lecture();

    while(run)
    {
        Symbole * symbole = lex.prochainSymbole();
        Etat * state = pileEtats.back();

        state->print();
        symbole->print();
        std::cout << "\n----------------------" << std::endl;
        if(!state->transition(*this, symbole))
        {
            run = false;
        }
    }

    Expr * result = (Expr*) pileSymboles.back();


    std::cout << "\nResultat : " << result->eval() << std::endl;
}

void Automate::decalage(Symbole* symbole, Etat* etat)
{
    pileSymboles.push_back(symbole);
    pileEtats.push_back(etat);
    lex.lecture();
}

void Automate::reduction(int n, Symbole* symbole)
{
    for (int i = 0; i < n; ++i)
    {
        //delete pileEtats.back();
        pileEtats.pop_back();
    }
    lex.ajouterSymbole(symbole);
}

