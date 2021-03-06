#ifndef EXPR_PLUS_H
#define EXPR_PLUS_H

#include "Expr.h"

class ExprPlus : public Expr
{
public:
    ExprPlus(Expr *e1, Expr *e2);
    ~ExprPlus();
    int eval() const;

private:
    Expr *expr1;
    Expr *expr2;
};

#endif // EXPR_PLUS_H
