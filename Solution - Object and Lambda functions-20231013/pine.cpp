#include "pine.h"
#include "utils.h"
#include <iostream>
#include <cstring>


Pine::Pine(){
	std::cout << "Planting a Pine - at address : " << this<<std::endl;
	width = 8;
	height = 4;
	size = alea(1,30);
	image = new Pixel[width*height];
	unsigned int texture[]={8,28,62,8};
	Pixel color = Pixel(0,alea(20,255),0);
	buildImage(image,width,height,texture, color);
}

//EXEMPLE 1

Pine::Pine(const Pine& s){
	std::cout << "Copy constructor of class Pine - at address : " << this<<std::endl;
	width = s.width;
	height = s.height;
	size = s.size;
	image = new Pixel[width*height];
	std::memcpy( image, s.image, width*height*sizeof(Pixel));

}

//EXEMPLE 2

Pine& Pine::operator=(const Pine& s){
	std::cout << "Appel à l'opérateur d'affectation de la classe Pine - adresse de l'objet : " << this<<std::endl;
	// protect against auto assignation 
	if (this == &s)
        return *this;
	//If the images are not the same size (which should not happen in this example)
	//	- deallocate the image from the object
	//	- copy the new width and height of the image
	//	- reallocation of an image object (array of pixels) to the right size
    if (width != s.width || height!=s.height){
    	delete image;
    	image = nullptr;
    	width = s.width;
    	height = s.height;
    	image = new Pixel[width*height];
    }
    std::memcpy( image, s.image, width*height*sizeof(Pixel));
    size = s.size;
    return *this;
}

Pine::~Pine(){
	std::cout << "Cutting down a pine - at address : " << this  <<std::endl;
	delete[] image;
}

void Pine::draw(){
	for (int i=0;i<width*height;i++){
        std::cout << image[i] ;
        if (i%width==0) {
			std::cout << std::endl;
		}
    }
    std::cout << "[0m"<< std::endl;
}

void Pine::info(){
	std::cout << "Pine address : " << this <<std::endl;
	std::cout << "Pine's image address : " << image << std::endl;
	std::cout << "Pine's size : " << size << std::endl;
}