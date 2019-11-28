//
// Created by Julien on 22/11/2019.
//

#ifndef TP7_WALKINGMENU_H
#define TP7_WALKINGMENU_H

#include "Menu.h"
#include "MenuItem.h"

class WalkingMenu : public Menu, public MenuItem {
public:
    virtual void execute();

    virtual MenuItem *clone() const;
};


#endif //TP7_WALKINGMENU_H
