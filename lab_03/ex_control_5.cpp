#include <iostream>
#include <string>
using namespace std;

string func(int n, string binary = "") {
	binary = to_string(n % 2) + binary;
	n /= 2;

	if (n > 0) {
		binary = func(n, binary);
	}

	return binary;
}

int main()
{
	cout << "Enter the value to convert it to binary: ";
	double n;
	cin >> n;
	string answer = func(n);
	cout << "Binary num = " << answer;
}
