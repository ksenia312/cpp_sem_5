#include <fstream>
#include <iostream>
#include "Person.h"

void Person::to_file(bool override=false)
{
	string current_file_info;

	// Save current file info if it's not overriding state
	if (!override) {
		ifstream file;
		file.open("./family.txt");
		while (file) {
			string line;
			getline(file, line);
			current_file_info += line + "\n";
		}
		file.close();
	}

	// Safe person and previous info to file
	ofstream out;
	out.open("./family.txt");
	if (out.is_open()) {
		out << current_file_info << "\nRole: " << role << "\nName: " << name << "\nPhone number: " << phone << "\nAge: " << age << endl;
	}
	out.close();
}

void Person::print()
{
	cout << "Role:" << role << "\nName: " << name << "\nPhone number: " << phone << "\nAge: " << age << endl;
}

bool Person::can_buy(int count)
{
	return count <= money;
}



