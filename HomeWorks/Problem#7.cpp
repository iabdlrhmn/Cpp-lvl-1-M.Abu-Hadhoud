/*
Write a program to ask the user for an input number and print 
The half of the number
*/
#include <iostream>
using namespace std;

int main()
{
    float num;
    cout << "Enter a number: ";
    cin >> num;

    float half = num / 2;
    cout << "Half of " << num << " is " << half << endl;

    return 0;
}