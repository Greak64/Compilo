#include "Expr.h"

Expr::Expr(int pvaleur) : Symbole(EXPR), valeur(pvaleur)
{}

Expr::~Expr()
{}

int Expr::eval() const
{
    return valeur;
}
