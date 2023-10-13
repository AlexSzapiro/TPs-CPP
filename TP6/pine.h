#ifndef _PINE
#define _PINE

#include "tree.h"

class Pine : public Tree {
public:
	//default constructor and destructor
	Pine();
	virtual ~Pine();
	//methods
	virtual void draw();
	virtual void info();
};

#endif