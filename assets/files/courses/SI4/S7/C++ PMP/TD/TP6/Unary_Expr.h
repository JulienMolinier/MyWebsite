//=======================================================================
//class Expression
//      Specification and implementation
//-----------------------------------------------------------------------
// Julien DeAntoni (inspired from Jean-Paul Rigault course)
// April 2010
//=======================================================================


#ifndef _UNARY_EXPR_H_
#define _UNARY_EXPR_H_

#include "Expr.h"

class Unary_Expr : public Expr {
protected:
    Expr *op;
public:
    Unary_Expr(Expr *pe) : op(pe->clone()) {}

    virtual Expr *clone() const = 0;

    virtual int eval() = 0;

    virtual ~Unary_Expr();

    Unary_Expr(const Unary_Expr &unary_expr) : op(unary_expr.op->clone()) {};

};


#endif
