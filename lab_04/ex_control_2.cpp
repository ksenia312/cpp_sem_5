#include <iostream>
#include <string>
using namespace std;

bool input(int& a, int& b) {
	cout << "Enter a and b where a - b = 135: ";
	cin >> a >> b;

	return a - b == 135;
}

int main()
{
	int a, b;
	if (!input(a, b))
	{
		cerr << "error";
		return 1;
	}
	int s = a + b;
	cout << "a + b = " << s << endl;
	return 0;
}