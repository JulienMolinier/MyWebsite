//=======================================================================
//class Expression
//      Specification and implementation
//-----------------------------------------------------------------------
// Julien DeAntoni (inspired from Jean-Paul Rigault course)
// April 2010
//=======================================================================


#include "Binary_Plus.h"

int Binary_Plus::eval() {
    return this->opl->eval() + this->opr->eval();
}

Expr *Binary_Plus::clone() const {
    return new Binary_Plus(*this);
}

Binary_Plus Binary_Plus::operator=(const Binary_Plus &binary_plus) {
    if (opl != nullptr) {
        delete opl;
    }
    opl = binary_plus.opl->clone();
    if (opr != nullptr) {
        delete opr;
    }
    opr = binary_plus.opr->clone();

    return *this;

}