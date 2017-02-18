#include "Nombre.h"

Nombre::Nombre(int pvaleur) : Symbole(VAL), valeur(pvaleur)
{}

int Nombre::getValeur()
{
    return valeur;
}
