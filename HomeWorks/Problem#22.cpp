/*
Write a program to calculate the area of a circle in a triangle
*/
#include <iostream>
using namespace std;

int main()
{
    const float Pi = 3.14159;
    float l1, l2;

    cout << "Enter the first side length of the triangle: " << endl;
    cin >> l1;
    cout << "Enter the second side length of the triangle: " << endl;
    cin >> l2;

    float area = Pi * (l2 * l2 / 4) * (2 * l1 - l2) / (2 * l1 + l2);

    cout << "circle area is: " << area << endl;

    return 0;
}