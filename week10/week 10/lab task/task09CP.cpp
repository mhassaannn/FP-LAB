#include <iostream>
using namespace std;

string timeTravel(int hours, int minutes) 
{
    minutes += 15;

    if (minutes >= 60) 
    {
        minutes -= 60;
        hours += 1;
    }

    if (hours >= 24) 
    {
        hours -= 24;
    }

    // Manually format hh:mm
    string result = "";

    if (hours < 10)
        result += "0";
    result += to_string(hours);

    result += ":";

    if (minutes < 10)
        result += "0";
    result += to_string(minutes);

    return result;
}

int main() 
{
    int hour, minute;

    cout << "Enter hour : ";
    cin >> hour;
    cout << "Enter minute : ";
    cin >> minute;

    cout << "Future time: " << timeTravel(hour, minute) << endl;

    return 0;
}