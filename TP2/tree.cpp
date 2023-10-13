#include "tree.h"
#include <iostream>

void Tree::draw(){
    std::cout << " Drawing tree " << std::endl;
}

void Tree::info(){
    std::cout << "The tree is planted at address" << this <<std::endl;
}

Tree::Tree():height(10.0), evergreen(false) {
    std::cout << " A tree has been created " << std::endl;
}

Tree::~Tree() {
    std::cout << " A tree has been destroyed " << std::endl;
}