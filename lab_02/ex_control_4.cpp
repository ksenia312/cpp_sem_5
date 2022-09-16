
#include <iostream>
using namespace std;
// program for the target shooting game

// func that determines if x and y are in the target with custom radius (based on math rules)
bool inCircle(double x, double y, int R) {
	return x * x + y * y < R*R;
}

int main()
{
	int total = 0;
	int attempts = 0;
	while (total < 50) {
		cout << "Enter coordinates in 'x y' format: ";
		double x, y;
		cin >> x >> y;

		// calculate score after the shot
		if (inCircle(x, y, 1)) {
			total += 10;
			cout << "10 points!\n";
		}
		else if (inCircle(x, y, 2)) {
			total += 5;
			cout << "5 points!\n";
		}
		else if (inCircle(x, y, 3)) {
			total += 1;
			cout << "1 point!\n";
		}
		else {
			cout << "Missed\n";
		}
		attempts++;
		cout << "\n\t-- Your score now is " << total << " --\n\n"; // print current score
	}
	cout << "\nGame finished \nStatus: ";

	// output the status, which is formed by the number of attempts
	if (attempts == 5) {
		cout << "god \n";
	}
	else if (attempts <= 10) {
		cout << "sniper \n";
	}
	else if (attempts <= 20) {
		cout << "shooter \n";
	}
	else {
		cout << "beginner \n";
	}
}

