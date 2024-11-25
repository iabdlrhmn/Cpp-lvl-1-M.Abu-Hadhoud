#include <iostream>
using namespace std;

int main()
{
    // Note: By default, everyhing is ssigned in c++
    int v1;
    signed int v2; // signed int is the same as int
    
    unsigned int v3;
    
    short int v4;
    short v5; // short is the same as short int
    
    unsigned short int v6;
    unsigned short v7; // unsigned short is the same as unsigned short int
    
    cout << "Size of int is: " << sizeof(int) << endl;
    cout << "char range is: (" << CHAR_MIN << "," << CHAR_MAX << ")" << endl;
    cout << "short int range is: (" << SHRT_MIN << "," << SHRT_MAX << ")" << endl;
    cout << "int range is: (" << INT_MIN << "," << INT_MAX << ")" << endl;
    cout << "long int range is: (" << LONG_MIN << "," << LONG_MAX << ")" << endl;
    cout << "long long int range is: (" << LLONG_MIN << "," << LLONG_MAX << ")" << endl;
    cout << "Size of long long int is: " << sizeof(long long int) << endl;
    cout << "Size of long int is: " << sizeof(long int) << endl;
    cout << "Size of short int is: " << sizeof(short int) << endl;
    cout << "Size of unsigned int is: " << sizeof(unsigned int) << endl;
    cout << "Size of unsigned short int is: " << sizeof(unsigned short int) << endl;

    return 0;
}