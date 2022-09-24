#include <iostream>
using namespace std;

double calc_area(double a) { // calc area by one side
	if (a <= 0) {  // incorrect input
		cout << "This triangle doesn't exist\n";
		return -1;
	}
	return a * a * sqrt(3) / 4; // formula
}

double calc_area(double a, double b, double c) { // the sane func with more params
	if (a + b <= c || a + c <= b || b + c <= a || a <= 0 || b <= 0 || c <= 0) { // incorrect input
		cout << "This triangle doesn't exist\n";
		return -1;
	}
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c)); // formula
}

int main()
{
	int type;
	do {
		cout << "Enter the type of triangle: Equal sides / Varied sides (1/2): ";
		cin >> type;
		if (type == 1) { // switch by type
			double a;
			cout << "Enter the side: ";
			cin >> a;
			double area = calc_area(a);
			cout << "Area of equal with equal sides: " << area; //res
		}
		else if (type == 2) {
			double a, b, c;
			cout << "Enter three sides in format 'a b c': ";
			cin >> a >> b >> c;
			double area = calc_area(a, b, c);
			cout << "Area of triangle with varied sides: " << area; //res
		}
		if (type != 0) {
			cout << "\n\n\t* To exit type 0\n";
		}

	} while (type != 0);
}