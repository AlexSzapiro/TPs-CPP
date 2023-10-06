#ifndef _TREE
#define _TREE


class Tree{
public:
	//virtual Destructor
	virtual ~Tree(){};
	//Public methods
	virtual void draw() =0;
	virtual void info() =0;
};

#endif