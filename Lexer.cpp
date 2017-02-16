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
{
	std::cin >> flux;
}

Symbole * Lexer::prochainSymbole()
{
	consomFlux = lectureFlux;
	return prochain;
}

void Lexer::lecture()
{
	char token = flux.at(lectureFlux);
	++lectureFlux;

	if(std::find(spaces.begin(), spaces.end(), token) != spaces.end())
	{
		if(std::find(operators.begin(), operators.end(), token) != operators.end())
		{
			prochain = new Symbole(token);
		}
		else if(isDigit(token))
		{
			std::string number;
			number += token;

            for(; lectureFlux < flux.size(); ++lectureFlux)
			{
				if(isDigit(flux.at(lectureFlux)))
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
			std::cout << "Error caractere non reconnu : " << token << std::endl;
		}
	}
}
