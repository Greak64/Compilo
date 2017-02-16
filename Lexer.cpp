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
    consomFlux = lectureFlux;
    return prochain;
}

void Lexer::ajouterSymbole(Symbole *)
{

}

bool Lexer::lecture()
{
    if(lectureFlux >= flux.size()) return false;

    char token = getCharFromFlux();

    while(std::find(spaces.begin(), spaces.end(), token) != spaces.end())
    {
        if(lectureFlux < flux.size())
            token = getCharFromFlux();
        else
            return false;
    }

    return analyseToken(token);
}

void Lexer::setFlux(std::string stream)
{
    lectureFlux = 0;
    consomFlux = 0;
    prochain = nullptr;

    flux = stream;

}

bool Lexer::analyseToken(char token)
{
    if(std::find(operators.begin(), operators.end(), token) != operators.end())
    {
        prochain = new Symbole(token);
    }
    else if(isDigit(token))
    {
        std::string number;
        number += token;

        while(lectureFlux < flux.size())
        {
            token = getCharFromFlux();
            if(isDigit(token))
            {
                number += token;
            }
            else
            {
                break;
            }
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

char Lexer::getCharFromFlux()
{
    ++lectureFlux;
    return flux.at(lectureFlux - 1);
}
