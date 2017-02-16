#include "ExprPlus.h"

ExprPlus::ExprPlus(Expr *e1, Expr *e2)
    : Expr(), expr1(e1), expr2(e2)
{}

ExprPlus::~ExprPlus()
{
    delete expr1;
    delete expr2;
}

int ExprPlus::eval() const
{
    return expr1->eval() + expr2->eval();
}
