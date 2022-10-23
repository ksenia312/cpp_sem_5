#include <iostream>

using namespace std;

// struct Time
struct Time
{
	int hours;
	int minutes;
	int seconds;

	void enter()
	{
		cout << "Hours = ";
		cin >> hours;
		cout << "Minutes = ";
		cin >> minutes;
		cout << "Seconds = ";
		cin >> seconds;
	}

	Time sum(Time anotherTime)
	{
		Time time;
		int sum_sec = (hours + anotherTime.hours) * 3600
			+ (minutes + anotherTime.minutes) * 60
			+ seconds + anotherTime.seconds;

		time.hours = sum_sec / 3600;
		sum_sec %= 3600;
		time.minutes = sum_sec / 60;
		sum_sec %= 60;
		time.seconds = sum_sec;

		return time;
	}

	Time substract(Time anotherTime)
	{
		Time time;
		int substract_sec = (hours - anotherTime.hours) * 3600
			+ (minutes - anotherTime.minutes) * 60
			+ seconds - anotherTime.seconds;

		if (substract_sec < 0) substract_sec += 24 * 3600;

		time.hours = substract_sec / 3600;
		substract_sec %= 3600;
		time.minutes = substract_sec / 60;
		substract_sec %= 60;
		time.seconds = substract_sec;

		return time;
	}

	void print()
	{
		cout << hours << ":" << minutes << ":" << seconds << endl;
	}
};


int main()
{

	Time time1;
	Time time2;
	cout << "Enter time1: \n";
	time1.enter();
	cout << "Enter time2: \n";
	time2.enter();

	Time sum = time1.sum(time2);
	Time substract = time1.substract(time2);

	cout << "time1 = ";
	time1.print();
	cout << "time2 = ";
	time2.print();

	cout << "time1 + time2 = ";
	sum.print();
	cout << "time1 - time2 = ";
	substract.print();
}