#ifndef __PERSON_H__
#define __PERSON_H__
#include <string>
#include "gender.h"

class person
{
public:
    std::string name;
    Gender gender;
    person* partner = nullptr;

    person(std::string name, Gender gender);
    void setPartner(person* partner);
    ~person();
};

std::ostream &operator<<(std::ostream &os, const person &p);

#endif