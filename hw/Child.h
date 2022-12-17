#pragma once
#include "Person.h"
class Child : public Person
{
public:
	Child(string name, string phone, int age, int money)
		: Person(name, phone, age, "child", money) {}
	void say_hello() override;
};

