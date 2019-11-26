#include <iostream>
#include "person.h"
#include "gender.h"

using std::cout;
using std::endl;

int main()
{
    person Amandine = {"Amandine", Gender::Female};
    person Charles = {"Charles", Gender::Male};

    cout << Amandine << endl;
    cout << Charles << endl;

    Amandine.setPartner(Charles);

    person Sylvie = {"Sylvie", Gender::Female};
    person Regis = {"Regis", Gender::Male};

    return 0;
}