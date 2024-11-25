/*
Write a program to take days, hours, minuts and seconds as input and convert it into seconds.
*/
#include <iostream>
using namespace std;

int main()
{
    int days, hours, minutes, seconds;

    cout << "Enter the number of days: " << endl;
    cin >> days;
    cout << "Enter the number of hours: " << endl;
    cin >> hours;
    cout << "Enter the number of minutes: " << endl;
    cin >> minutes;
    cout << "Enter the number of seconds: " << endl;
    cin >> seconds;

    int total_seconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;

    cout << "Total seconds is: " << total_seconds << endl;

    return 0;
}