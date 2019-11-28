//
// Created by Julien on 22/11/2019.
//

#ifndef TP7_MENU_H
#define TP7_MENU_H

#include <string>
#include "MenuItem.h"
#include <vector>

class Menu {
public:
    std::string title;
    std::vector<MenuItem *> items;

    void activate();

    void addItem(MenuItem &menuItem);

    Menu(std::string t) : title(t) {};

    virtual ~Menu();
};


#endif //TP7_MENU_H
