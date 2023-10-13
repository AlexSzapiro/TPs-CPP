#ifndef SAPIN
#define SAPIN

#include "tree.h"
#include "pixel.h"

class Pine : public Tree {
private:
	int width;
	int height;
	Pixel *image;
public:
	//Default constructor and destructor
	Pine();
	~Pine();
	//Copy constructor
	Pine(const Pine& s);
	//Affectation operator
	Pine& operator=(const Pine& s);
	//Méthode de la classe Pine
	void draw() override final;
	void info() override final;
};

#endif