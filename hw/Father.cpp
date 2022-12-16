#include "Father.h"

void Father::buy(int count)
{
	// If Father has enough money
	if (can_buy(count)) {
		money-=count;
		cout << "Father bought something for " << count << " rubles" << endl;
		cout << "Father now has " << money << " rubles" << endl;
	}
	else {
		cout << "Father didn't have enough money to buy something for " << count << " rubles" << endl;
	}
}
