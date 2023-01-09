#include "main.h"

void Time::IncrementMin() {
    if (minute == 59) {
        minute = 0;
        hour = (hour + 1) % 24;
    }
    else {
        minute = (minute+1) % 60;
    }
};

void Time::DecrementMin() {
    if (minute == 0) {
        minute = 59;
        hour = (hour + 23) % 24;
    }
    else {
        minute = (minute - 1) % 60;
    }
};

void Time::SetMin(int m) {
    minute = m;
};

void Time::SetHour(int h) {
    hour = h;
};

int Time::GetMin() const {
    return minute;
};

int Time::GetHour() const {
    return hour;
};

void Time::DisplayTime() const {
    if (minute <=9 && hour <= 9) {
        cout << "Time: 0" << hour << ":0" << minute << "\n";
    }
    else if (minute <=9) {
        cout << "Time: " << hour << ":0" << minute << "\n";
    }
    else if (hour <=9) {
        cout << "Time: 0" << hour << ":" << minute << "\n";
    }
    else {
        cout << "Time: " << hour << ":" << minute << "\n";
    }
};