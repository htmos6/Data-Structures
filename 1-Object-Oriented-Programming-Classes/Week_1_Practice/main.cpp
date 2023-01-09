#include "main.h"

int main () {
    Time myTime;
    myTime.DisplayTime();

    myTime.DecrementMin();
    myTime.DisplayTime();

    Time newTime(myTime);
    newTime.DisplayTime();

    TimeZone myTimeZone;
    myTimeZone.DisplayTimeWithTimeZone();

    myTimeZone.ChangeTimeZone(10);
    myTimeZone.DisplayTimeWithTimeZone();

    TimeZone newTimeZone(myTimeZone);
    newTimeZone.DisplayTimeWithTimeZone();

    return 0;
}