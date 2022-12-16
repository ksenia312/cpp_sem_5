#include <iostream>
#include <string>
using namespace std;

// Base class Person
#pragma once
class Person {
public:
	Person(string name, string phone, int age, string role, int money) :
		name(name), phone(phone), age(age), role(role), money(money) {};

	string role;

	void to_file(bool); // Write current instance to file

	void print(); // Print info about person

	bool can_buy(int); // Check if person can buy something for N rubles


protected:
	string name;
	string phone;
	int age;
	int money;
};
