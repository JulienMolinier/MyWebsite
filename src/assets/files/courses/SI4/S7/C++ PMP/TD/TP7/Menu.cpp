//
// Created by Julien on 22/11/2019.
//

#include "Menu.h"
#include <iostream>

void Menu::addItem(MenuItem &menuItem) {
    items.push_back(&menuItem);
}

void Menu::activate() {
    std::cout << title << std::endl;
    for (int i = 0; i < items.size(); ++i) {
        std::cout << i << "- " << items[i]->text << std::endl;
    }
}

Menu::~Menu() {
    for (MenuItem *m: items) {
        delete m;
    }
}