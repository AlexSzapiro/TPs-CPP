#ifndef LUMBERJACK
#define LUMBERJACK

#include "tree.h"

class Lumberjack {
private:
	int counter;
	double cuttingHeight;
public:
	//Default constructor and destructor
	Lumberjack();
	Lumberjack(double h);
	~Lumberjack();

	int getCounter() const;

	void operator() (Tree& t);
	
};

#endif