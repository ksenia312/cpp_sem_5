#include <iostream>
#include <cmath>
#include <tuple>

using namespace std;

// Tuple Equation Decision

using Tuple = tuple<bool, double, double>;

Tuple get_decision(double a, double b, double c)
{

	double D = b * b - 4 * a * c;
	if (D < 0) {
		return make_tuple(false, 0, 0);
	}
	else {
		return make_tuple(true,
			(-b - sqrt(D)) / (2 * a),
			(-b + sqrt(D)) / (2 * a));
	}
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

	Tuple decision = get_decision(a, b, c);
	if (!get<0>(decision)) {
		cout << "No roots";
	}
	else if (get<1>(decision) == get<2>(decision)) {
		cout << "x1 = x2 = " << get<1>(decision);
	}
	else {
		cout << "x1 = " << get<1>(decision) << ", x2 = " << get<2>(decision);
	}
}