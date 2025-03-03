#include <iostream>
using std::cout;
using std::endl;

class Time {
public:
    Time();
    void setTime(int h, int m, int s);
    void printMilitary();
    void printStd();

private:
    int hour;
    int min;
    int sec;
};

Time::Time() {
    hour = min = sec = 0;
}

void Time::setTime(int h, int m, int s) {
    hour = (h >= 0 && h < 24) ? h : 0;
    min = (m >= 0 && m < 60) ? m : 0;
    sec = (s >= 0 && s < 60) ? s : 0;
}

void Time::printMilitary() {
    cout << (hour < 10 ? "0" : "") << hour << ":"
         << (min < 10 ? "0" : "") << min << endl;
}

void Time::printStd() {
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
         << (min < 10 ? "0" : "") << min << ":"
         << (sec < 10 ? "0" : "") << sec << " "
         << (hour < 12 ? "AM" : "PM") << endl;
}
