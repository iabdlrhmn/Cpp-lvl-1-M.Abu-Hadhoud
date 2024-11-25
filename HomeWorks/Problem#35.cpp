/*
Write a program to take pennies, nickels, dimes, and quarters as input 
and calculate the total value of the coins in dollars and cents.
*/
#include <iostream>
using namespace std;

int main()
{
    short pennies, nickels, dimes, quarters, dollars;
    double total_dollars, total_pennies;

    cout << "Enter the number of pennies: ";
    cin >> pennies;
    cout << "Enter the number of nickels: ";
    cin >> nickels;

    cout << "Enter the number of dimes: ";
    cin >> dimes;

    cout << "Enter the number of quarters: ";
    cin >> quarters;

    cout << "Enter the number of dollars: ";
    cin >> dollars;

    total_pennies = pennies + (5 * nickels) + (10 * dimes) + (25 * quarters) + (100 * dollars);
    total_dollars = total_pennies / 100;

    cout << "The total value of the coins in dollars is: " << total_dollars << endl;
    cout << "The total value of the coins in cents is: " << total_pennies << endl;

    return 0;
}