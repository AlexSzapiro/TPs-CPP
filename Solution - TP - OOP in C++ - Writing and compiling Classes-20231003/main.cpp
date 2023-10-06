#include "tree.h"
#include "pine.h"

int main(int argc, char* argv[]) {

	Tree *tp = new Pine;

	tp->draw();
	tp->info();

	delete tp;

	return 0;
}