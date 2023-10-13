#include "lumberjack.h"


Lumberjack::Lumberjack():Lumberjack(5.0){}

Lumberjack::Lumberjack(double h):counter(0),cuttingHeight(h){}

Lumberjack::~Lumberjack(){};

int Lumberjack::getCounter() const{
	return counter;
}

void Lumberjack::operator() (Tree& t) {
	if (t.size>cuttingHeight) {
		t.size = cuttingHeight;
		counter++;
	}
}