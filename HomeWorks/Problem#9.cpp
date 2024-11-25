/*
Write a program to ask the User for three numbers and find the total of them
*/
#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    cout << "Enter the third number: " << endl;
    cin >> num3;

    float sum = num1 + num2 + num3;
    cout << "The sum of your three numbers is: " << sum << endl;

    return 0;
}