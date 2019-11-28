//
// Created by Julien on 22/11/2019.
//

#ifndef TP7_SIMPLEMENUITEM_H
#define TP7_SIMPLEMENUITEM_H

#include "MenuItem.h"

class SimpleMenuItem : public MenuItem {
public:
    virtual void execute();

    SimpleMenuItem(std::string txt) : MenuItem(txt) {};

    SimpleMenuItem(const SimpleMenuItem &simpleMenuItem);

    virtual MenuItem *clone() const;
};


#endif //TP7_SIMPLEMENUITEM_H
