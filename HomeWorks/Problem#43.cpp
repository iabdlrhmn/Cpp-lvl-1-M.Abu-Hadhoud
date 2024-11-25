/*
Write a program to take seconds as input and convert it into days, hours, minuts and seconds 00:00:00:00 format.
*/
#include <iostream>
using namespace std;

int main()
{
    int total_seconds = 0, remaining_seconds = 0;
    int days, hours, minutes, seconds;
    
    const int minute_seconds = 60, 
    hour_seconds = (minute_seconds * 60), 
    day_seconds = (hour_seconds * 24);

    cout << "Enter total number of seconds: " << endl;
    cin >> total_seconds;

    days = total_seconds / day_seconds;
    remaining_seconds = total_seconds % day_seconds;

    hours = remaining_seconds / hour_seconds;
    remaining_seconds %= hour_seconds;

    minutes = remaining_seconds / minute_seconds;
    remaining_seconds %= minute_seconds;

    seconds = remaining_seconds;

    cout << days << ":" << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}
