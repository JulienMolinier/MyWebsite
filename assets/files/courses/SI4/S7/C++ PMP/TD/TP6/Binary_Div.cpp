//=======================================================================
//class Expression
//      Specification and implementation
//-----------------------------------------------------------------------
// Julien DeAntoni (inspired from Jean-Paul Rigault course)
// April 2010
//=======================================================================


#include "Binary_Div.h"

int Binary_Div::eval() {
    return this->opl->eval() / this->opr->eval();
}

Expr *Binary_Div::clone() const {
    return new Binary_Div(*this);
}

Binary_Div Binary_Div::operator=(const Binary_Div &binary_div) {
    if (opl != nullptr) {
        delete opl;
    }
    opl = binary_div.opl->clone();
    if (opr != nullptr) {
        delete opr;
    }
    opr = binary_div.opr->clone();

    return *this;
}