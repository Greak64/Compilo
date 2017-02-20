#include "ExprMult.h"

ExprMult::ExprMult(Expr *e1, Expr *e2)
    : Expr(), expr1(e1), expr2(e2)
{}

ExprMult::~ExprMult()
{
    delete expr1;
    delete expr2;
}

int ExprMult::eval() const
{
    return expr1->eval() * expr2->eval();
}
