#pragma once
class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    void set_hours(int);
    void set_minutes(int);
    void set_seconds(int);
    int get_hours() const;
    int get_minutes() const;
    int get_seconds() const;
    void sum(Time, Time);
    Time(int, int, int);
    Time();
    void show_time() const;
};