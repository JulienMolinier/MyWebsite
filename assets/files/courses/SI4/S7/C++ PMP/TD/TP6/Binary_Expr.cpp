//=======================================================================
//class Expression
//      Specification and implementation
//-----------------------------------------------------------------------
// Julien DeAntoni (inspired from Jean-Paul Rigault course)
// April 2010
//=======================================================================


#include "Binary_Expr.h"

Binary_Expr::~Binary_Expr() {
    delete this->opl;
    delete this->opr;
}