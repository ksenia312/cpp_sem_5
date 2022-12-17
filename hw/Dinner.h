#pragma once
#include "Person.h"

class Dinner
{
public:
	// Using aggregation
	Dinner(Person* person) :
		person(person), products{ {"meat","beer","rice"},{"salad", "potato", "corn"},{"baby food","milk", "porridge"}} {};

	void print(); // Print dinner for current person
	void print_availability(string); // Print if entered product is in the person's product list

protected:
	Person* person;
	string products[3][3];
	int get_person_id(); // For determining person's products
	bool contains(string); // Check if entered product is in the person's product list
};

