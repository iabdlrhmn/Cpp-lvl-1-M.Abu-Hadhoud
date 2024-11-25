/*
Write a program to read the student 3 grades and print the average of it
*/
#include <iostream>
using namespace std;

int main()
{
    float grade1, grade2, grade3;;

    cout << "Enter the first grade: " << endl;
    cin >> grade1;
    cout << "Enter the second grade: " << endl;
    cin >> grade2;
    cout << "Enter the third grade: " << endl;
    cin >> grade3;

    float average = (grade1 + grade2 + grade3) / 3;
    cout << "The average of yput three grades is: " << average << endl;

    return 0;
}