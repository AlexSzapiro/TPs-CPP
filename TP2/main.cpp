#include "tree.h"

int main (int argc , char * argv []) {
    Tree  *t = new Tree;
    Tree a ;
    Tree b ;
    t->draw() ;
    t->info() ;
    a.info() ;
    b.info() ;
    delete t;
	return 0 ;
}