#include <iostream>
#include <map>
using namespace std;
// program that count how many monets every RUS nominal do we need for current sum
int main()
{
	cout << "Enter the sum\n";
	int sum;
	int nominals[4] = { 10, 5, 2, 1 }; // array for nominals
	cin >> sum;


	for (int nominal : nominals) { // for every nominal in our array of nominals
		int count = sum / nominal;

		sum -= count * nominal; // sum gets smaller when we count monets with current nominal
		if (count != 0) {
			cout << nominal << " RUB - " << count << " monets \n";
		}
	}
}
