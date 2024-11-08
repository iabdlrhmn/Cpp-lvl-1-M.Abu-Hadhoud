#include <iostream>
using namespace std;

int main()
{
    int Age;
    string Name;
    string Country;
    string City;
    char Gender;
    bool Married;
    float MonthlySalary;

    cout << "Enter your Name: " << endl;
    cin >> Name;

    cout << "Enter your Age: " << endl;
    cin >> Age;

    cout << "Enter your Gender (M/F): " << endl;
    cin >> Gender;

    cout << "Are you Married? (1/0): " << endl;
    cin >> Married;

    cout << "Enter your Monthly Salary: " << endl;
    cin >> MonthlySalary;

    cout << "Where are you from? " << endl;
    cin >> Country;

    cout << "What's your hometown? " << endl;
    cin >> City;

    cout << "***********************************************\n"
         << "Name: " << Name << endl
         << "Age: " << Age << endl
         << "Gender: " << Gender << endl
         << "Married: " << Married << endl
         << "Monthly Salary: " << MonthlySalary << endl
         << "Yearly Salary: " << MonthlySalary * 12 << endl
         << "Country: " << Country << endl
         << "City: " << City << endl
         << "***********************************************\n";

    return 0;
}