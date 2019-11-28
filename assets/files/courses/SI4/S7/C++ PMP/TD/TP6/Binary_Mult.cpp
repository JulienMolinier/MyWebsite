//=======================================================================
//class Expression
//      Specification and implementation
//-----------------------------------------------------------------------
// Julien DeAntoni (inspired from Jean-Paul Rigault course)
// April 2010
//=======================================================================


#include "Binary_Mult.h"

int Binary_Mult::eval() {
    return this->opl->eval() * this->opr->eval();
}

Expr *Binary_Mult::clone() const {
    return new Binary_Mult(*this);
}

Binary_Mult Binary_Mult::operator=(const Binary_Mult &binary_mult) {
    if (opl != nullptr) {
        delete opl;
    }
    opl = binary_mult.opl->clone();
    if (opr != nullptr) {
        delete opr;
    }
    opr = binary_mult.opr->clone();

    return *this;

}