#ifndef EXPRPAR_H
#define EXPRPAR_H

#include "Expr.h"

class ExprPar : public Expr
{
public:
    ExprPar(Expr * expression);
    ~ExprPar() = default;
    int eval() const;

private:
    Expr * expr;

};

#endif // EXPRPAR_H
