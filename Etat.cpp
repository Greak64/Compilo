#include "Etat.h"

Etat::Etat(std::string pname) : name(pname)
{}

void Etat::print() const
{
    std::cout << name << "  ";
}
