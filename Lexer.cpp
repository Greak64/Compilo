/*
 * Lexer.cpp
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#include "Lexer.h"
#include "Nombre.h"

#include <vector>
#include <algorithm>
#include <iostream>

static std::vector<char> spaces = {' ', '\n', '\t'};
static std::vector<char> operators = {'+', '*', '(', ')'};

static bool isDigit(char c)
{
    return c >= '0' && c <= '9';
}

Lexer::Lexer() : lectureFlux(0), consomFlux(0), prochain(nullptr)
{}

Symbole * Lexer::prochainSymbole()
{
    lectureFlux = consomFlux;
    return prochain;
}

void Lexer::ajouterSymbole(Symbole * symbole)
{
    --consomFlux;
    delete prochain;
    prochain = symbole;
}

void Lexer::lecture()
{
    // On regarde le prochain caractère
    // S'il n'y en a pas, on peut sortir avec le symbole END
    do{
        ++consomFlux;
        if(!nextToken())
        {
            prochain = new Symbole(Symbole::Type::END);
            return;
        }
    }while(std::find(spaces.begin(), spaces.end(), token) != spaces.end());

    // On identifie le token
    analyseToken();
}

bool Lexer::setFlux(std::string stream)
{
    if(!stream.empty())
    {
        lectureFlux = 0;
        consomFlux = 0;
        prochain = nullptr;

        flux = stream;
        return true;
    }
    return false;
}

bool Lexer::analyseToken()
{
    if(std::find(operators.begin(), operators.end(), token) != operators.end())
    {
        prochain = new Symbole(token);
    }
    else if(isDigit(token))
    {
        std::string number;
        number += token;

        while(nextToken())
        {
            if(isDigit(token))
            {
                ++consomFlux;
                number += token;
            }
            else break;

        }
        prochain = new Nombre(std::atoi(number.c_str()));
    }
    else
    {
        std::cout << "Erreur caractere non reconnu : " << token << std::endl;
        return false;
    }


    return true;
}

bool Lexer::nextToken()
{ 
    if(lectureFlux >= flux.size())
    {
        return false;
    }

    token = flux.at(lectureFlux);
    ++lectureFlux;
    return true;
}
