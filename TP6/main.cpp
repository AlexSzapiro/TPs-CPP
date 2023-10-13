#include "utils.h"
#include <iostream>

int main (int argc , char ** argv ) {
std :: cout << " Launching the main program " << std :: endl ;
//int a = 10;
//int b = 10;
std :: cout << "Is a smaller than b ? " << smallerThan <int >(10,100) << std :: endl ;
std :: cout << "End of main program - destroying heap objects " << std :: endl ;
std :: cout << "End of main program - destroying stack objects " << std :: endl ;
return 0;
}