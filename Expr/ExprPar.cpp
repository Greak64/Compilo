#include "ExprPar.h"

ExprPar::ExprPar(Expr *expression) : expr(expression)
{}

int ExprPar::eval() const
{
    return expr->eval();
}
