#include "tree.h"

#include <iostream>

Tree::Tree():height(10.0),evergreen(false){
	std::cout << "Planting a Tree" << std::endl;
}

Tree::~Tree(){
	std::cout << "Cutting down a Tree" << std::endl;
}

void Tree::draw(){
	std::cout<< "Drawing tree" << std::endl;
}

void Tree::info(){
	std::cout<< "The tree is planted at address " << this << std::endl;
}