/*
Write a program to ask the user for two number and swap them
*/
#include <iostream>
using namespace std;

int main()
{
    short num1, num2, temp;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "your numbers after swaping: " << num1 << " ," << num2 << endl;

    return 0;
}