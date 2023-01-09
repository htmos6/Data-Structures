#include "main.h"

TimeZone::TimeZone (int h, int m, int z): Time(h, m) {
    if (z > 12 || z < -11) {
        cerr << "Incorrect Time Zone: " << z << "\n";
    }
    else {
        timezone = z;
    }
};

TimeZone::TimeZone (const TimeZone &TzObj): Time(TzObj.GetHour(), TzObj.GetMin()) {
    timezone = TzObj.GetTimeZone();
};

void TimeZone::ChangeTimeZone(int z) {
    if (z < -11 || z > 12) {
        cerr << "Incorrect Time Zone: " << z << "\n";
    }
    else {
        SetHour((24 + GetHour()-GetTimeZone()+z) % 24);
        timezone = z;
    }
};

int TimeZone::GetTimeZone() const {
    return timezone;
};

void TimeZone::DisplayTimeWithTimeZone() const {
    DisplayTime();
    if(timezone >= 0 && timezone < 10)
        cout << "Time Zone: GMT+0" << timezone << ":00" << endl;
    else if(timezone > 0)
        cout << "Time Zone: GMT+" << timezone << ":00" << endl;
    else if(timezone> -10)
        cout << "Time Zone: GMT-0" << -1*timezone << ":00" << endl;
    else
        cout << "Time Zone: GMT-" << -1* timezone << ":00" << endl;
};