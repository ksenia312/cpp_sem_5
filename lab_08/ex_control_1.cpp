#include "ex_control_1.h"
#include <iostream>

using namespace std;

void Time::set_hours(int hours) {
	Time::hours = hours;
}

void Time::set_minutes(int minutes) {
	Time::minutes = minutes;
}

void Time::set_seconds(int seconds) {
	Time::seconds = seconds;
}

int Time::get_hours() const {
	return Time::hours;
}

int Time::get_minutes() const {
	return Time::minutes;
}

int Time::get_seconds() const {
	return Time::seconds;
}

void Time::show_time() const {
	cout << "Time = " << Time::get_hours() << ":" << Time::get_minutes() << ":" << Time::get_seconds() << endl;
}


Time::Time(int hours, int minutes, int seconds) {

	if (seconds >= 60) {
		seconds %= 60;
		minutes++;
	}

	if (minutes >= 60) {
		minutes %= 60;
		hours++;
	}

	if (hours >= 24) hours %= 24;

	Time::seconds = seconds;
	Time::minutes = minutes;
	Time::hours = hours;
}

Time::Time() {
	Time::hours = 0;
	Time::minutes = 0;
	Time::seconds = 0;
}

void Time::sum(Time t1, Time t2) {
	int temp =
		(t1.get_hours() + t2.get_hours()) * 3600 + (t1.get_minutes() + t2.get_minutes()) * 60 + t1.get_seconds() +
		t2.get_seconds();

	int hours = temp / 3600;
	temp %= 3600;
	int minutes = temp / 60;
	temp %= 60;
	int seconds = temp;

	if (seconds >= 60) {
		seconds %= 60;
		minutes++;
	}

	if (minutes >= 60) {
		minutes %= 60;
		hours++;
	}

	if (hours >= 24) hours %= 24;

	Time::set_hours(hours);
	Time::set_minutes(minutes);
	Time::set_seconds(seconds);
}

int main() {

	int hours, minutes, seconds;
	cout << "time1:" << endl;
	cout << "Enter hours: ";
	cin >> hours;
	cout << "Enter minutes: ";
	cin >> minutes;
	cout << "Enter seconds: ";
	cin >> seconds;

	Time time1 = Time(hours, minutes, seconds);

	cout << "time2:" << endl;
	cout << "Enter hours: ";
	cin >> hours;
	cout << "Enter minutes: ";
	cin >> minutes;
	cout << "Enter seconds: ";
	cin >> seconds;

	Time time2 = Time(hours, minutes, seconds);
	time1.show_time();
	time2.show_time();


	Time* time3 = new Time;
	time3->sum(time1, time2);
	time3->show_time();

}