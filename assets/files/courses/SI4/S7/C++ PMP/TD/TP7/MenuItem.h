//
// Created by Julien on 22/11/2019.
//

#ifndef TP7_MENUITEM_H
#define TP7_MENUITEM_H

#include <string>

class MenuItem {
public:
    std::string text;

    MenuItem(std::string txt) : text(txt) {};

    MenuItem(const MenuItem &menuItem);

    virtual MenuItem *clone() const = 0;

    virtual void execute() = 0;

    virtual ~MenuItem();
};


#endif //TP7_MENUITEM_H
