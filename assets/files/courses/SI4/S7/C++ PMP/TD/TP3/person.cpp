#include "person.h"
#include "gender.h"
#include <iostream>
#include <string>

using std::string;

person::person(string name, Gender gender)
{
    this->name = name;
    this->gender = gender;
}

void person::setPartner(person *partner)
{
    if (partner != nullptr)
    {
        this->partner = partner;
    }
}

person::~person()
{
}

std::ostream &operator<<(std::ostream &os, const person &p)
{
    os << "Prenom: " << p.name << "\n";
    os << "Genre: " << p.gender << "\n";
    if (p.partner != nullptr)
    {
        os << "Partenaire: " << p.partner->name << "\n";
    }

    return os;
}
