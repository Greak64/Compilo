#ifndef EXPR_PLUS_H
#define EXPR_PLUS_H

#include "Expr.h"

class ExprPlus : public Expr
{
public:
    ExprPlus(Expr *e1, Expr *e2);
    virtual ~ExprPlus();
    virtual int eval() const;

protected:
    Expr *expr1;
    Expr *expr2;
};

#endif // EXPR_PLUS_H
