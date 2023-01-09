#include <bits/stdc++.h>
using namespace std;
class Time {
    private:
        int hour, minute;
    public:
        Time (int h = 0, int m = 0): hour(h), minute(m) {};
        Time (const Time &timeObj): hour(timeObj.GetHour()), minute(timeObj.GetMin()) {};
        void IncrementMin();
        void DecrementMin();
        void SetMin(int m);
        void SetHour(int h);
        int GetMin() const;
        int GetHour() const;
        void DisplayTime() const;
};

class TimeZone : public Time {
    private:
        int timezone;
    public:
        TimeZone(int h=0, int m=0, int z=0);
        TimeZone(const TimeZone &TzObj);
        void ChangeTimeZone(int z);
        int GetTimeZone() const;
        void DisplayTimeWithTimeZone() const;
};