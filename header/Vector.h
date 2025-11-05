
#ifndef VECTOR_H
#define VECTOR_H

class Vector {
public:
	int x, y;
	Vector(int,int);
	Vector operator + (const Vector &) const;
};

#endif
