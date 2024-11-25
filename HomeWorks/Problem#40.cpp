/*
a resturant takes 10% of the bill as service fees and 16% of the bill as tax.
Write a program to calculate the total bill including the service fees and tax.
*/
#include <iostream>
using namespace std;

int main()
{
    float bill;

    cout << "Enter the bill amount: " << endl;
    cin >> bill;
    
    float fees = 0.1 * bill, tax = 0.16 * bill;
    float total_bill = bill + fees + tax;

    cout << "The Total amount to be paid is: " << total_bill << endl;

    return 0;
}