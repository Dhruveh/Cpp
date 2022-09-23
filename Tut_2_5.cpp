// 5.Write a cpp program for 1+2+3+4+5 upto n terms.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, sum = 0, tsum;
    cout << "Enter the value for Nth term :";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        tsum = 0;
        for (j = 1; j <= i; j++)
        {
            sum += j;
            tsum += j;
            cout << j;
            if (j < i)
            {
                cout << "+";
            }
        }
        cout << "=" << tsum << endl;
    }
    cout << "sum of series is :" << sum << endl;
    return 0;
}