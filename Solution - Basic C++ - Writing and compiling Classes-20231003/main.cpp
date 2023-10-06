#include "tree.h"

int main(int argc, char* argv[]) {
	//create a Tree on the stack
	Tree tStack;
	tStack.draw();
	tStack.info();
	//create a Tree on the heap
	Tree *tHeap = new Tree;
	tHeap->draw();
	tHeap->info();
	delete tHeap;
	return 0;
}