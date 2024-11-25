/*
Write a program to calculate the triangle area
*/
#include <iostream>
using namespace std;

int main()
{
    float hight, base;
    cout << "Enter the hight of the triangle: " << endl;
    cin >> hight;
    cout << "Enter the base of the triangle: " << endl;
    cin >> base;

    float area = 0.5 * hight * base;
    cout << "The area of the triangle is: " << area << endl;

    return 0;
}