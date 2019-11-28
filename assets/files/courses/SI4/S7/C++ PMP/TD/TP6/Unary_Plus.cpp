//=======================================================================
//class Expression
//      Specification and implementation
//-----------------------------------------------------------------------
// Julien DeAntoni (inspired from Jean-Paul Rigault course)
// April 2010
//=======================================================================


#include "Unary_Plus.h"

int Unary_Plus::eval() {
    return this->op->eval();
}

Expr *Unary_Plus::clone() const {
    return new Unary_Plus(*this);
}

Unary_Plus Unary_Plus::operator=(const Unary_Plus &unary_plus) {
    if (op != nullptr) {
        delete op;
    }
    op = unary_plus.op->clone();

    return *this;

}


