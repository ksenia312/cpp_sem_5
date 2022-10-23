#include <iostream>
#include "triangle.h"
#include "dot.h"

using namespace std;

int main()
{
	double x, y;
	cout << "dot1 (x, y): ";
	cin >> x >> y;
	Dot dot1 = Dot(x, y);

	cout << "dot2 (x, y): ";
	cin >> x >> y;
	Dot dot2 = Dot(x, y);

	cout << "dot3 (x, y): ";
	cin >> x >> y;
	Dot dot3 = Dot(x, y);

	Triangle triangle = Triangle(&dot1, &dot2, &dot3);

	double perimeter = triangle.get_perimeter();
	double area = triangle.get_area();

	triangle.show();
	cout << "P = " << perimeter << ", S = " << area << endl;

}
//dot1(x, y) : 0 10
//dot2(x, y) : 0 0
//dot3(x, y) : 10 0
//Sides: s1 = 10, s2 = 10, s3 = 14.1421
//P = 34.1421, S = 50