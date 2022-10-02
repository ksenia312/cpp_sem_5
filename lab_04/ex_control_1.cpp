#include <iostream>
using namespace std;

int root(double a, double b, double c, double& x1, double& x2) {
	double D = b * b - 4 * a * c;
	if (D > 0) {
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		return 1;
	}
	else if (D == 0) {
		x1 = -b / (2 * a);
		x2 = x1;
		return 0;
	}
	else {
		return -1;
	}
}

int main()
{
	double x1, x2;
	double a, b, c;
	cout << "Enter the coeficients of equation Ax**2 + Bx + C = 0 in format 'A B C': ";
	cin >> a >> b >> c;
	int status = root(a, b, c, x1, x2);
	switch (status) {
	case 1:
		cout << "The equation has 2 roots\n\t x1 = " << x1 << "\n\t x2 = " << x2 << endl;
		break;
	case 0:
		cout << "The equation has 1 root\n\t x1 = x2 = " << x1 << endl;
		break;
	case -1:
		cout << "The equation doesn't have any root" << endl;
		break;
	}



}

