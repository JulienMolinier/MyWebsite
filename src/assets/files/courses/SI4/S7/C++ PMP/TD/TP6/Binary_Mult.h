//=======================================================================
//class Expression
//      Specification and implementation
//-----------------------------------------------------------------------

// Julien DeAntoni (inspired from Jean-Paul Rigault course)
// April 2010
//=======================================================================


#ifndef _BINARY_MUL_H_
#define _BINARY_MUL_H_

#include "Binary_Expr.h"


class Binary_Mult : public Binary_Expr {
public:
    Binary_Mult(Expr &pe1, Expr &pe2) : Binary_Expr(&pe1, &pe2) {};

    virtual int eval();

    virtual Expr *clone() const;

    virtual ~Binary_Mult() {};

    Binary_Mult operator=(const Binary_Mult &binary_mult);

};


#endif
