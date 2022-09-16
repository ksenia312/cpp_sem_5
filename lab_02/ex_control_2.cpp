#include <iostream>
#include <string>
using namespace std;

// program to check if the SNILS is valid
int main()
{
	cout << "Enter your SNILS (main and control parts together)\n";
	string snils, calc_control; // variables for snils and our calculationg control
	int sum = 0; // sum of products of numbers 

	cin >> snils;
	string main = snils.substr(0, 9); // finding the main part
	string control = snils.substr(9, 11); // finding the control part


	for (int i = 0; i < 9; i++) {
		int currentNumber = (int)main[i] - 48; // converting char to int 
		// we do "- 48" because ASCII code numbers starts from 48

		sum += currentNumber * (9 - i); // calculate sum
	}

	// checking the sum and write our control
	if (sum < 100) {
		calc_control = sum < 10 ? "0" + to_string(sum) : to_string(sum);

	}
	else if (sum == 100 || sum == 101) {
		calc_control = '00';
	}
	else {
		int residue = sum % 101;
		if (residue < 100) {
			calc_control = residue < 10 ? "0" + to_string(residue) : to_string(residue);
		}
		else {
			calc_control = "00";
		}
	}

	if (control.compare(calc_control) == 0) { // checking if controls are same
		cout << "\nTrue: valid control (" << control << ")" << endl;
	}
	else {
		cout << "\nFalse: invalid control (" << control << ")" << "\n -- correct is " << calc_control << endl;
	}
}