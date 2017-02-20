#ifndef EXPR_PAR_H
#define EXPR_PAR_H

#include "Expr.h"

class ExprPar : public Expr
{
public:
    ExprPar(Expr * expression);
    ~ExprPar();
    int eval() const;

private:
    Expr * expr;

};

#endif // EXPR_PAR_H
