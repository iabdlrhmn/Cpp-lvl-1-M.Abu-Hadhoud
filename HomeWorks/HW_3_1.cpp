#include <iostream>
using namespace std;

int main()
{
    int Age = 21, MonthlySalary = 10000, YearlySalary = MonthlySalary*12;
    string Name = "Abdulrahman Mohamed Said", Country = "Egypt", City = "Utopia";
    char Gender = 'M';
    bool Married = false;

    cout << "******************************************************\n";
    cout << "My name is: " << Name << "\n"
         << "My age is: " << Age << "\n"
         << "My city is: " << City << "\n"
         << "My homeland is: " << Country << "\n"
         << "My monthly salary is: " << MonthlySalary << "\n"
         << "My annual income is: " << YearlySalary << "\n"
         << "Gender: " << Gender << "\n"
         << "Married? " << Married << "\n";
    cout << "******************************************************\n";
    return 0;
}