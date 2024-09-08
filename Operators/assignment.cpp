//  Assignment Operators.

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter values of a and b: ";
    cin >> a >> b;

    a += b;
    cout << "a += b, a: " << a << endl;

    a -= b;
    cout << "a -= b, a: " << a << endl;

    a *= b;
    cout << "a *= b, a: " << a << endl;

    a /= b;
    cout << "a /= b, a: " << a << endl;

    return 0;
}
