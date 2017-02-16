#ifndef EXPR_MULT_H
#define EXPR_MULT_H

#include "Expr.h"

class ExprMult : public Expr
{
public:
    ExprMult(Expr *e1, Expr *e2);
    virtual ~ExprMult();
    virtual int eval() const;

protected:
    Expr *expr1;
    Expr *expr2;
};

#endif // EXPR_MULT_H
