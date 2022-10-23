#include <iostream>

using namespace std;

// Time with exceptions
class Time {
public:
	class TimeException
	{
	public:
		TimeException(bool fail_hours, bool fail_minutes, bool fail_seconds)
		{
			if (fail_hours) {
				error += "fail hours";
			}
			if (error != "") {
				error += ", ";
			}
			if (fail_minutes) {
				error += "fail minutes";
			}
			if (error != "") {
				error += ", ";
			}
			if (fail_seconds) {
				error += "fail seconds";
			}
		}
		void print() const { cout << error; }
	private:
		string error;
	};

	void set_hours(int hours) {
		Time::hours = hours;
	}

	void set_minutes(int minutes) {
		Time::minutes = minutes;
	}

	void set_seconds(int seconds) {
		Time::seconds = seconds;
	}

	int get_hours() const {
		return Time::hours;
	}

	int get_minutes() const {
		return Time::minutes;
	}

	int get_seconds() const {
		return Time::seconds;
	}

	void show_time() const {
		cout << "Time = " << Time::get_hours() << ":"
			<< Time::get_minutes() << ":"
			<< Time::get_seconds() << endl;
	}


	Time(int hours, int minutes, int seconds) {
		bool fail_hours = false;
		bool fail_minutes = false;
		bool fail_seconds = false;

		if (hours >= 24) fail_hours = true;
		if (minutes >= 60) fail_minutes = true;
		if (seconds >= 60) fail_seconds = true;


		if (fail_hours || fail_minutes || fail_seconds) {
			throw TimeException(fail_hours, fail_minutes, fail_seconds);
		}
		else
		{
			Time::hours = hours;
			Time::minutes = minutes;
			Time::seconds = seconds;
		}
	}

	Time() {
		Time::hours = 0;
		Time::minutes = 0;
		Time::seconds = 0;
	}

	void sum(Time t1, Time t2) {
		int sum_secs =
			(t1.get_hours() + t2.get_hours()) * 3600 +
			(t1.get_minutes() + t2.get_minutes()) * 60 +
			t1.get_seconds() + t2.get_seconds();

		int hours = sum_secs / 3600;
		sum_secs %= 3600;
		int minutes = sum_secs / 60;
		sum_secs %= 60;
		int seconds = sum_secs;

		if (seconds >= 60) {
			seconds %= 60;
			minutes++;
		}

		if (minutes >= 60) {
			minutes %= 60;
			hours++;
		}

		if (hours >= 24) {
			hours %= 24;
		}

		Time::set_hours(hours);
		Time::set_minutes(minutes);
		Time::set_seconds(seconds);
	}
private:
	int hours, minutes, seconds;
};
int main()
{
	int hours, minutes, seconds;
	cout << "Enter hours: ";
	cin >> hours;
	cout << "Enter minutes ";
	cin >> minutes;
	cout << "Enter seconds: ";
	cin >> seconds;

	try {
		Time time = Time(hours, minutes, seconds);
	}
	catch (Time::TimeException& error)
	{
		cout << "TimeException (";
		error.print();
		cout << ")\n";
	}
}

//Enter hours: 89
//Enter minutes 89
//Enter seconds : 89
//TimeException(fail hours, fail minutes, fail seconds)