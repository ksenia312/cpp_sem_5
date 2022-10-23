#include "triangle.h"
#include <iostream>
#include <cmath>

using namespace std;

double Triangle::get_perimeter() const
{
	double s1 = Triangle::d1->distanceTo(*d2);
	double s2 = Triangle::d2->distanceTo(*d3);
	double s3 = Triangle::d3->distanceTo(*d1);

	return s1 + s2 + s3;
}

double Triangle::get_area() const
{
	double s1 = Triangle::d1->distanceTo(*d2);
	double s2 = Triangle::d2->distanceTo(*d3);
	double s3 = Triangle::d3->distanceTo(*d1);
	double p = (s1 + s2 + s3) / 2;
	double res = sqrt(p * (p - s1) * (p - s2) * (p - s3));

	return res;
}

void Triangle::show() const
{
	double s1 = Triangle::d1->distanceTo(*d2);
	double s2 = Triangle::d2->distanceTo(*d3);
	double s3 = Triangle::d3->distanceTo(*d1);
	cout << "Sides: s1 = " << s1 << ", s2 = " << s2 << ", s3 = " << s3 << endl;
}


Triangle::Triangle(Dot* d1, Dot* d2, Dot* d3)
{
	this->d1 = d1;
	this->d2 = d2;
	this->d3 = d3;
}