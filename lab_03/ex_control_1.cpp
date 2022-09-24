#include <iostream>
#include <string>
using namespace std;
// program to check if the SNILS is valid (with func)


string get_clear_snils(string snils) { // func that clears input and returns new snils or empty string (in case bad input)
	snils.erase(remove(snils.begin(), snils.end(), ' '), snils.end());
	snils.erase(remove(snils.begin(), snils.end(), '-'), snils.end());

	if (snils.find_first_not_of("1234567890") != string::npos) {
		return "";
	}

	return snils;
}

string generate_control(int test_value) { // checking sum and return our control
	if (test_value < 100) {
		return test_value < 10 ? "0" + to_string(test_value) : to_string(test_value);
	}
	else if (test_value == 100 || test_value == 101) {
		return "00";
	}
	else {
		int residue = test_value % 101;
		if (residue < 100) {
			return residue < 10 ? "0" + to_string(residue) : to_string(residue);
		}
		else {
			return "00";
		}
	}
}

bool verificate_snils(string snils) {
	int sum = 0; // sum of products of numbers 

	snils = get_clear_snils(snils);
	cout << "Your input: " << snils << '\n';

	if (snils.size() == 11) { // do verification only if clear snils has correct size
		string main = snils.substr(0, 9); // finding the main part
		string control = snils.substr(9, 11); // finding the control part

		for (int i = 0; i < 9; i++) {
			int currentNumber = (int)main[i] - 48; // converting char to int 
			// we do "- 48" because ASCII code numbers starts from 48

			sum += currentNumber * (9 - i); // calculate sum
		}

		string generated_control = generate_control(sum); // get generated control
		if (control.compare(generated_control) == 0) {
			return true;
		}
		else {
			cout << "Your control: " << control << '\n';
			cout << "Generated control: " << generated_control << '\n'; // print the diff
			return false;
		}

	}
	else { 
		// if clear snils doesn't have correct len - 
		// it's input with incorrect len OR input has not allowed characters
		cout << "Bad input\n";
		return false;
	}

}

int main()
{
	cout << "Enter your SNILS (main and control parts together)\n";
	string snils; // variable for snils

	getline(cin, snils);

	if (verificate_snils(snils)) { // our func for verification
		cout << "True\n";
	}
	else {
		cout << "False\n";
	}

}