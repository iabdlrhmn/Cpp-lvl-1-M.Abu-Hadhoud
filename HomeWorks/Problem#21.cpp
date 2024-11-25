/*
Write a program to calculate the area of aa circle from it's circumference
*/
#include <iostream>
using namespace std;

int main()
{
    const float Pi = 3.14159;
    float circum;
    cout << "Enter the circumference: " << endl;
    cin >> circum;

    float area = (circum * circum) / (4 * Pi);

    cout << "The area of the circle is :" << area << endl;

    return 0;
}