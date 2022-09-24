#include <iostream>
using namespace std;

double cube_sqrt_pow(double n) {
	return pow(n, 1.0 / 3); // calculating by pow func
}

double cube_sqrt_formula(double n) {

	double cube = 1;
	do { 
		cube = (2 * cube + n / (cube * cube)) / 3;
	} while (round(pow(n, 1.0 / 3) * 1000) != round(cube * 1000)); // 0.001 is the calculation accuracy
	// calculate the value for x until the answer will be rigth (with accurancy)
	return cube;
}

int main()
{
	double n;
	cout << "Enter the value to get the cube sqrt: ";
	cin >> n;
	cout << "by pow: " << cube_sqrt_pow(n) << endl;
	cout.precision(10);
	cout << "by formula: " << cube_sqrt_formula(n) << endl;
}
