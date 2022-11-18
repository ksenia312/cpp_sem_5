
#include <iostream>
using namespace std;
// Time operator overloading

class Time
{
private:
	int hours;
	int minutes;
	int seconds;

public:
	Time();
	Time(int, int, int);
	void show_time() const;
	int get_hours() const;
	int get_minutes() const;
	int get_seconds() const;
	Time sum(Time, Time);
	Time substract(Time, Time);
	Time operator+(Time);
	Time operator+(float);
	Time operator-(Time);
	bool operator<(Time) const;
	bool operator>(Time) const;
};

Time::Time() {
	Time::hours = 0;
	Time::minutes = 0;
	Time::seconds = 0;
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
	cout << "Time = " << Time::get_hours() << ":" 
		<< Time::get_minutes() << ":" 
		<< Time::get_seconds() << endl;
}



Time Time::sum(Time t1, Time t2) {
	int temp =
		(t1.get_hours() + t2.get_hours()) * 3600 + 
		(t1.get_minutes() + t2.get_minutes()) * 60 + 
		t1.get_seconds() + t2.get_seconds();

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

	return { hours, minutes, seconds };
}

Time Time::substract(Time t1, Time t2) {
	int temp =
		(t1.get_hours() - t2.get_hours()) * 3600 + 
		(t1.get_minutes() - t2.get_minutes()) * 60 + 
		t1.get_seconds() - t2.get_seconds();

	
	if (temp < 0) temp += 3600 * 24;

	int hours = temp / 3600;
	temp %= 3600;
	int minutes = temp / 60;
	temp %= 60;
	int seconds = temp;

	return { hours, minutes, seconds };
}

Time Time::operator+(Time time) {
	return sum(*this, time);
}

Time Time::operator+(float float_hours) {
	float temp;
	int seconds = modf(float_hours, &temp) * 3600;
	int hours = temp;
	int minutes = seconds / 60;
	seconds %= 60;
	return *this + Time(hours, minutes, seconds);
}

Time Time::operator-(Time t) {
	return substract(*this, t);
}

bool Time::operator<(Time t) const {
	int temp1 = this->get_hours() * 3600 + this->get_minutes() * 60 + this->get_seconds();
	int temp2 = t.get_hours() * 3600 + t.get_minutes() * 60 + t.get_seconds();

	if (temp1 < temp2) return true;
	else return false;
}


bool Time::operator>(Time t) const {
	int temp1 = this->get_hours() * 3600 + this->get_minutes() * 60 + this->get_seconds();
	int temp2 = t.get_hours() * 3600 + t.get_minutes() * 60 + t.get_seconds();

	if (temp1 < temp2) return false;
	else return true;
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
	time1.show_time();

	Time time2 = time1 + 7.104f;
	time2.show_time();

	Time time3 = time1 + time2;
	time3.show_time();

	Time time4 = time3 - time2;
	time4.show_time();

	cout << (time3 < time4);
}

//time1:
//Enter hours : 2
//Enter minutes : 46
//Enter seconds : 34
//Time = 2 : 46 : 34 
//Time = 9 : 52 : 48 (2:46:34 + 7.104f)
//Time = 12 : 39 : 22 (2:46:34 + 9:52:48)
//Time = 2 : 46 : 34 (12:39:22 - 9:52:48)
//0 (12:39:22 < 2:46:34)