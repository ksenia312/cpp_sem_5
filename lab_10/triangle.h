#pragma once
#include "dot.h"

using namespace std;

class Triangle
{
public:
	Triangle(Dot*, Dot*, Dot*);
	void show() const;
	double get_perimeter() const;
	double get_area() const;
private:
	Dot* d1;
	Dot* d2;
	Dot* d3;
};