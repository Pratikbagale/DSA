#include <iostream>
using namespace std;

void fib(int n)
{
    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    for (int i = 1; i <= n; i++)
    {
        cout << t1 << endl; // Print the current term
        nextTerm = t1 + t2; // Calculate the next term
        t1 = t2;            // Update t1 and t2 for the next iteration
        t2 = nextTerm;
    }
}

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    fib(n); // Call the function to print Fibonacci sequence
}
