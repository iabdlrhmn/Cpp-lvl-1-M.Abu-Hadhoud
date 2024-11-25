#include <iostream>
using namespace std;

int main()
{
    unsigned short x, y, z;
    cout << "Enter three positive numbers: " << endl;
    cin >> x >> y >> z;
    cout << x << " +\n"
         << y << " +\n"
         << z << "\n___________\n\n"
         << "Total is: " << x + y + z;

    return 0;
}