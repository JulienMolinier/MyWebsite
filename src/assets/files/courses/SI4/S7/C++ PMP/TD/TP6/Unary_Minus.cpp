//=======================================================================
//class Expression
//      Specification and implementation
//-----------------------------------------------------------------------
// Julien DeAntoni (inspired from Jean-Paul Rigault course)
// April 2010
//=======================================================================

#include "Unary_Minus.h"

int Unary_Minus::eval() {
    return -this->op->eval();
}

Expr *Unary_Minus::clone() const {
    return new Unary_Minus(*this);
}

Unary_Minus Unary_Minus::operator=(const Unary_Minus &unary_minus) {
    if (op != nullptr) {
        delete op;
    }
    op = unary_minus.op->clone();

    return *this;

}