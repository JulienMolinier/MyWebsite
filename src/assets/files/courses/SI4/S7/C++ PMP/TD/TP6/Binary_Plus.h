//=======================================================================
//class Expression
//      Specification and implementation
//-----------------------------------------------------------------------

// Julien DeAntoni (inspired from Jean-Paul Rigault course)
// April 2010
//=======================================================================


#ifndef _BINARY_PLUS_H_
#define _BINARY_PLUS_H_

#include "Binary_Expr.h"


class Binary_Plus : public Binary_Expr {
public:
    Binary_Plus(Expr &pe1, Expr &pe2) : Binary_Expr(&pe1, &pe2) {};

    virtual int eval();

    virtual Expr *clone() const;

    virtual ~Binary_Plus() {};

    Binary_Plus operator=(const Binary_Plus &binary_plus);

};


#endif
