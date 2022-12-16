#include <iostream>
#include "Mother.h"
#include "Dinner.h"
#include "Father.h"
#include "Child.h"

int main()
{
	string spacer = "--------------------------------";

	// Define variables for family members
	Mother mother = Mother("Alice", "+7 (999) 888-88-88", 32, 32000);
	Father father = Father("Bob", "+7 (919) 348-58-86", 35, 100000);
	Child child = Child("Anton", "+7 (533) 254-56-73", 6, 300);

	// Define variables for their dinners
	Dinner mother_dinner = Dinner(mother);
	Dinner father_dinner = Dinner(father);
	Dinner child_dinner = Dinner(child);

	cout << spacer << endl;

	// Methods for Dinner (mother)
	mother_dinner.print(); 
	mother_dinner.print_availability("salad");
	mother_dinner.print_availability("baby food");

	cout << spacer << endl;

	// Methods for Dinner (father)
	father_dinner.print();
	father_dinner.print_availability("meat");
	father_dinner.print_availability("salad");

	cout << spacer << endl;

	// Methods for Dinner (child)
	child_dinner.print();
	child_dinner.print_availability("baby food");
	child_dinner.print_availability("meat");

	cout << spacer << endl;

	// Collection - array family
	Person family[3] = { child, mother, father };

	// Print info about family members
	for (auto& person : family) {
		person.print();
		cout << endl;
	}

	cout << spacer << endl;

	// Check if members can buy something for N rubles
	for (auto& person : family) {
		if (person.can_buy(300)) {
			cout << person.role << " can buy video game for 300 rubles" << endl;
		}
		if (person.can_buy(30000)) {
			cout << person.role << " can buy sofa for 30000 rubles" << endl;
		}
		if (person.can_buy(50000)) {
			cout << person.role << " can buy computer for 50000 rubles" << endl;
		}
		cout << endl;
	}

	cout << spacer << endl;

	// Individual methods

	// Mother can change her phone
	mother.change_phone("+7 (949) 838-58-68");
	// Father can buy something
	father.buy(3000);

	cout << spacer << endl;

	// Write family to file
	mother.to_file(true);
	father.to_file(false);
	child.to_file(false);
}


//OUTPUT
//
//--------------------------------
//Dinner for mother
//salad
//potato
//corn
//
//mother's dinner contains salad
//mother's dinner doesn't contain baby food
//--------------------------------
//Dinner for father
//meat
//beer
//rice
//
//father's dinner contains meat
//father's dinner doesn't contain salad
//--------------------------------
//Dinner for child
//baby food
//milk
//porridge
//
//child's dinner contains baby food
//child's dinner doesn't contain meat
//--------------------------------
//Role:child
//Name : Anton
//Phone number : +7 (533) 254 - 56 - 73
//Age : 6
//
//Role : mother
//Name : Alice
//Phone number : +7 (999) 888 - 88 - 88
//Age : 32
//
//Role : father
//Name : Bob
//Phone number : +7 (919) 348 - 58 - 86
//Age : 35
//
//--------------------------------
//child can buy video game for 300 rubles
//
//mother can buy video game for 300 rubles
//mother can buy sofa for 30000 rubles
//
//father can buy video game for 300 rubles
//father can buy sofa for 30000 rubles
//father can buy computer for 50000 rubles
//
//--------------------------------
//Mother's new phone: +7 (949) 838-58-68
//Father bought something for 3000 rubles
//Father now has 97000 rubles
//--------------------------------