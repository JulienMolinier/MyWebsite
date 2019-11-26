//=======================================================================
//class Expression
//      Specification and implementation
//-----------------------------------------------------------------------

// Julien DeAntoni (inspired from Jean-Paul Rigault course)
// April 2010
//=======================================================================


#ifndef _CONSTANT_H_
#define _CONSTANT_H_

#include "Expr.h"

// Constant expressions

class Constant : public Expr {
private:
    const int val;
public:
    Constant(int v) : val(v) {}

    virtual int eval();

    virtual Expr *clone() const;

    virtual ~Constant() {};

};

#endif