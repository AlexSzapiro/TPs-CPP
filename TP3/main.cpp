#include "tree.h"
#include "pine.h"
#include <iostream>

int main (int argc , char * argv []) {

    // create a Tree on the heap
    Tree *tp = new Pine ; // allocate a Pine
    tp -> draw ();
    tp -> info ();
    delete tp;

	return 0 ;
}