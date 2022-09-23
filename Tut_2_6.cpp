// 6.Write a cpp program to print fibonnaci series (o/p : 0 1 1 2 3 5 8 )
#include <iostream>
using namespace std;

int main()
{
    int n, i, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if (i == 1)
        {
            cout << t1 << ", ";
            //continue;
        }
        if (i == 2)
        {
            cout << t2 << ", ";
           // continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << ", ";
    }
    return 0;
}