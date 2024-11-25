/*
Write a program to calculate the area of a circle in a square
*/
#include <iostream>
using namespace std;

int main()
{
    const float Pi = 3.14159;
    float side_length;
    cout << "Enter the side length of the cube: " << endl;
    cin >> side_length;

    float area = (Pi * side_length * side_length) / 4;
    cout << "The area of the circle is: " << area << endl;

    return 0;
}