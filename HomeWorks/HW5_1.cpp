#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cout << "Please enter a number: " << endl;
    cin >> A;
    cout << "Please enter another number: " << endl;
    cin >> B;
//arethmetic operators : +, -, *, /, %
    cout << "The sum of " << A << " and " << B << " is " << A + B << endl;
    cout << "The difference of " << A << " and " << B << " is " << A - B << endl;
    cout << "The product of " << A << " and " << B << " is " << A * B << endl;
    cout << "The quotient of " << A << " and " << B << " is " << A / B << endl;
    cout << "The remainder of " << A << " divided by " << B << " is " << A % B << endl;

    return 0;
}