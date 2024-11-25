/*
Write a program to read loan and monthly installment and calculate number of months
*/
#include <iostream>
using namespace std;

int main()
{
    float loan, installment, months;

    cout << "Enter loan amount: ";
    cin >> loan;

    cout << "Enter monthly installment: ";
    cin >> installment;

    months = loan / installment;

    cout << "Number of months: " << months << endl;

    return 0;
}