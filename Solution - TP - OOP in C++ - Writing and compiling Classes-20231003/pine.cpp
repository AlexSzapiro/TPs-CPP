#include "pine.h"
#include <iostream>

Pine::Pine(){
	std::cout << "Planting a Pine" << std::endl;
}

Pine::~Pine(){
	std::cout << "Cutting down a Pine" << std::endl;
}

void Pine::draw(){
	std::cout<< "Drawing a Pine" << std::endl;
}

void Pine::info(){
	std::cout<< "The Pine is planted at address " << this << std::endl;
}