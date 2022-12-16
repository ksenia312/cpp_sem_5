#pragma once
#include "Person.h"
class Father :
    public Person
{
public:
	Father(string name, string phone, int age, int money)
		: Person(name, phone, age, "father", money) {}

	void buy(int); // Individual method - subtracts the entered amount from the money
};

