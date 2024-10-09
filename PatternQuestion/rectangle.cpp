// Rectangle pattern

#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;

    for (int i = 0; i < row; i++) // Iterate from 0 to row - 1
    {
        for (int j = 0; j < col; j++) // Iterate from 0 to col - 1
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}