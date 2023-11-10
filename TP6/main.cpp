#include "utils.h"
#include <iostream>
#include "pine.h"

int main (int argc , char ** argv ) {
    std :: cout << " Launching the main program " << std :: endl ;
    Pine a;
    Pine b;
    std :: cout << "a size " << a.height <<" & b size " << b.height << std :: endl ;
    std :: cout << "Is a smaller than b ? " << smallerThan<Pine>(a,b) << std :: endl ;
    std :: cout << "End of main program - destroying heap objects " << std :: endl ;
    std :: cout << "End of main program - destroying stack objects " << std :: endl ;
return 0;
}