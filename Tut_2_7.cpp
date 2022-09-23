// 7.Write a cpp program for 1! + 2! + 3! upto n terms.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, fact = 1, i;
    float sum = 0;
    cout << "Enter number of terms :" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        sum = sum + ((i * 1.0) / fact);
    }
    cout << sum;
    return 0;
}
//I am don't understand