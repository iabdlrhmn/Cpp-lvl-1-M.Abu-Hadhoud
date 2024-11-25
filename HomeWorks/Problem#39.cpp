/*
Write a program to read the bill and return the change.
*/
#include <iostream>
using namespace std;

int main()
{
    short total_bill, cash;
    
    cout << "Enter the total bill: " << endl;
    cin >> total_bill;
    cout << "Enter the amount paid: " << endl;
    cin >> cash;
    float remainder = cash - total_bill;
    cout << "The change is: " << remainder << endl;
    
    return 0;
}