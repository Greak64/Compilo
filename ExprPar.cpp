#include "ExprPar.h"

ExprPar::ExprPar(Expr *expression) : expr(expression)
{}

ExprPar::~ExprPar()
{
    delete expr;
}

int ExprPar::eval() const
{
    return expr->eval();
}
