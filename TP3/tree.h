#ifndef TREE
#define TREE

class Tree {
private:
    double height ;
    bool evergreen ;

public :
    //virtual Destructor
	virtual ~Tree(){};
	//Public methods
	virtual void draw() =0;
	virtual void info() =0;
};

#endif