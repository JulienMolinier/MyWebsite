//=======================================================================
//class Expression
//      Specification and implementation
//-----------------------------------------------------------------------
// Julien DeAntoni (inspired from Jean-Paul Rigault course)
// April 2010
//=======================================================================


#include "Constant.h"

int Constant::eval() {
    return this->val;
}

Expr *Constant::clone() const {
    return new Constant(*this);
}