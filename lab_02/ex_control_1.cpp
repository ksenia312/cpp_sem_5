#include <iostream>
using namespace std;
// program to check if the value is super simple

bool checkSimple(int val) { // func that check if the value is simple 
	if (val < 2) {
		return false;
	}

	for (int i = 2; i < val; i++) {
		if (val % i == 0) { // value cannot be divided by anything other than itself and 1
			return false; 
		}
	}
	return true; // if the program compile this row, the value is simple
}

int main()
{
	cout << "Enter your value (greater than 0): ";
	int value;
	int simpleId = 0; // number of our value in the list of simples
	cin >> value;

	cout << " ----> " << value; 

	if (checkSimple(value)) { // we will check simpleId only if value is simple
		for (int i = 2; i <= value; i++) {
			if (checkSimple(i)) {
				simpleId += 1;
			}
		}
		if (checkSimple(simpleId)) { // "simpleId is simple" checking
			cout << " is super simple, position is " << simpleId << "\n";
		}
		else { // simpleId isn't simple but our value is simple
			cout << " is simple but isn't super simple, position is " << simpleId << "\n";
		}
	}
	else { // value isn't simple 
		cout << " isn't even simple\n";
	}

}
// we used "int" type for value because all simple values are int
// we used "int" type for simpleId because it's a natural number