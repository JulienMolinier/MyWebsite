//
// Created by Julien on 22/11/2019.
//

#include "WalkingMenu.h"
#include <vector>
#include <iostream>

MenuItem *WalkingMenu::clone() const {
    return new WalkingMenu(*this);
}

void WalkingMenu::execute() {
    std::cout << "***********Execution de " << text << std::endl;
    activate();

}