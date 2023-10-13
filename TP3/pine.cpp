#include "pine.h"
#include <iostream>

void Pine::draw() {
    std::cout << " Drawing pine " << std::endl;
}

void Pine::info() {
    std::cout << "The pine is planted at address" << this <<std::endl;
}

Pine::Pine() {
    //Tree(true);

    std::cout << " A pine has been created " << std::endl;
}

Pine::~Pine() {
    std::cout << " A pine has been destroyed " << std::endl;
}