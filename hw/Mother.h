#pragma once
#include "Person.h"
class Mother : public Person
{
public:
	Mother(string name, string phone, int age, int money)
		: Person(name, phone, age, "mother", money) {}

	void change_phone(string); // Individual method - changes phone
};

