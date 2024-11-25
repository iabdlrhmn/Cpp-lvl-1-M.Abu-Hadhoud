/*
Write a program to calculate the rectangle area
*/
#include <iostream>
using namespace std;

int main()
{
    float length, width;
    cout << "Enter the length of the rectangle: " << endl;
    cin >> length;
    cout << "Enter the width of the rectangle: " << endl;
    cin >> width;

    float area = length * width;
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}