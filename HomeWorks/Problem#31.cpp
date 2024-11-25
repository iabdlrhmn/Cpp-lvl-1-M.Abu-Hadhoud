/*
Write a program to ask user for a number and print the number to he power 2, 3 and 4
*/
#include <iostream>
using namespace std;

int main ()
{
    float num;
    cout << "Enter a number: " << endl;
    cin >> num;

    float pow2 = num * num, 
    pow3 = num * num * num, 
    pow4 = num * num * num * num;

    cout << num << "to the power 2 is " << pow2 << endl;
    cout << num << "to the power 3 is " << pow3 << endl;
    cout << num << "to the power 4 is " << pow4 << endl;

    return 0;
}