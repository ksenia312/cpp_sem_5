#include <iostream>
using namespace std;

// program to calculate the area of vertex
int main()
{
	double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5; // variable declaration

	cout << "Enter the coordinate of 1 vertex in 'x1 y1' format: ";
	cin >> x1 >> y1; 	// entering variables x1, y1

	cout << "Enter the coordinate of 2 vertex in 'x2 y2' format: ";
	cin >> x2 >> y2; 	// entering variables x2, y2 

	cout << "Enter the coordinate of 3 vertex in 'x3 y3' format: ";
	cin >> x3 >> y3; 	// entering variables x3, y3

	cout << "Enter the coordinate of 4 vertex in 'x4 y4' format: ";
	cin >> x4 >> y4; 	// entering variables x4, y4

	cout << "Enter the coordinate of 5 vertex in 'x5 y5' format': ";
	cin >> x5 >> y5; 	// entering variables x5, y5


	// print the answer by calculating it using the Gauss area formula
	cout << "Area is " << 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5) << endl;

}

