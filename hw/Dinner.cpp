#include "Dinner.h"


void Dinner::print()
{
	cout << "Dinner for " << person.role << endl;

	for (auto& product : products[get_person_id()]) {
		cout << product << endl;
	}
	cout << "\n";
}

void Dinner::print_availability(string food)
{
	cout << person.role << "'s dinner " << (contains(food) ? "contains " : "doesn't contain ") << food << endl;
}

bool Dinner::contains(string food)
{
	for (auto& product : products[get_person_id()]) {
		if (product == food) {
			return true;
		}
	}
	return false;
}

int Dinner::get_person_id()
{
	if (person.role == "father") {
		return 0;

	}
	else if (person.role == "mother") {
		return 1;
	}
	else return 2;

}
