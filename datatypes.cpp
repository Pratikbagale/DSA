#include <iostream>
using namespace std;

int main()
{

    int a;
    a = 12;
    cout << "size of int " << sizeof(a) << endl;

    float b;
    cout << "size of float " << sizeof(b) << endl;

    char c;
    cout << "size of char " << sizeof(c) << endl;

    bool d;
    cout << "size of bool " << sizeof(d) << endl;

    return 0;
}

// output -  size of int 4
//           size of float 4
//           size of char 1
//           size of bool 1