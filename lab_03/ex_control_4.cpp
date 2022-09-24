#include <iostream>
using namespace std;

double calc_sum(double n, double s = 0) { // calculate the sum of the progression
	if (n <= 0) {
		return 0;
	}
	s += 5 * n;
	n--;
	if (n > 0) calc_sum(n, s); // if n > 0 we need to add more items and call the func again
	else return s;

}

int main()
{
	cout << "Enter n: ";
	double n;
	cin >> n;
	cout << calc_sum(n); // call recursive calculation

}

