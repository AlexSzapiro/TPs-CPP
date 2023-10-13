#include <iostream>
#include "tree.h"
#include "oak.h"
#include "pine.h"


int main(int argc, char** argv) {
	std::cout << "Launching the main program" << std::endl;
	//Tree array declaration
	Tree **forest;
	int type;
	int number;


	//Create a dynamic forest
	std::cout << "How many trees do you want to draw ? " << std::endl;
	std::cin >> number;
	std::cout << "Which type of tree: (1 : pine or 2 : oak) ?" << std::endl;
	std::cin >> type;
	forest = new Tree*[number];
	for (int i =0;i<number;i++){
		if (type == 1){
			forest[i] = new Pine;
		} else if (type == 2){
			//Création d'un érable sur le tas
			forest[i] = new Oak;
		} else {
			std::cout << "Unkown type" <<std::endl;
			delete[] forest;
			return -1;
		}
	}	

	for(int i=0; i<number; i++){
		forest[i]->draw();
		forest[i]->info();
	}
	std::cout << "End of main program - destroying heap objects" << std::endl;
	for (int i=0;i<number;i++){
		delete forest[i];
	}

	delete[] forest;

	std::cout << "End of main program - destroying stack objects" << std::endl;
	return 0;
}