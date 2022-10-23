#include <iostream>
#include <cmath>

using namespace std;

// struct EquationDecision
struct EquationDecision
{
	double x1, x2;
};


EquationDecision get_decision(double a, double b, double c)
{
	EquationDecision s;

	double D = b * b - 4 * a * c;

	s.x1 = (-b - sqrt(D) / (2 * a));
	s.x2 = (-b + sqrt(D) / (2 * a));

	return s;
}


int main()
{
	cout << "Input equation coefficients" << endl;
	cout << "a = ";
	int a, b, c;
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	EquationDecision decision = get_decision(a, b, c);
	if (decision.x1 == decision.x2) {
		cout << "x1 = x2 = " << decision.x1;
	}
	else {
		cout << "x1 = " << decision.x1 << ", x2 = " << decision.x2;
	}
}