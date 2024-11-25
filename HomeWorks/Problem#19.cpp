/*
Write a program to calculate the area of circle
*/
#include <iostream>
using namespace std;

int main()
{
    const float Pi = 3.14159;
    float diameter;
    
    cout << "Enter the diameter of the circle: " << endl;
    cin >> diameter;

    float area = (Pi * diameter * diameter) / 4;
    cout << "The area of the circle is: " << area << endl;

    return 0;
}