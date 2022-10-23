#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// saving a poem to file

int main()
{
	ofstream out;
	string text;
	int count;
	cout << "Enter the number of lines: ";
	cin >> count;
	while (count >= 0) {
		string line;
		getline(cin, line);
		text += line + "\n";
		count--;
	}

	out.open("C:/Users/Ksenia/Documents/5 sem/cpp/lab_06/ex_control_1/poem.txt");
	if (out.is_open())
	{
		out << text;
	}

	cout << "Saved to C:/Users/Ksenia/Documents/5 sem/cpp/lab_06/ex_control_1/poem.txt" << endl;
}
