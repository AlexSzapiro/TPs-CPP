#ifndef TREE
#define TREE

class Tree {
public:
	double size;
	virtual ~Tree() {};

	virtual void draw() =0;
	virtual void info() =0;
};

#endif