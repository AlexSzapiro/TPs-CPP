#include <iostream>
#include <math.h>
#include <stdlib.h>

int main (int argc , char * argv []) {
	double v = atof(argv[1]);
	std::cout << "Résultat = " << std::cos(v) << std::endl;
	return 0;
}
