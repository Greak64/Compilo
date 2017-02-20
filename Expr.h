/*
 * Expr.h
 *
 *  Created on: 14 févr. 2017
 *      Author: ostein
 */

#ifndef EXPR_H_
#define EXPR_H_

#include "Symbole.h"
#include <map>

class Expr : public Symbole {
public:
    Expr(int pvaleur = 0);
    virtual ~Expr();
    virtual int eval() const;

protected:
    int valeur;

};

#endif /* EXPR_H_ */
