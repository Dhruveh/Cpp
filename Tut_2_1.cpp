// 1.Write a cpp program to accept one number from user & display sum of it's digits.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, s = 0;
    cout << "Enter the number :";
    cin >> x;
    while (x != 0)
    {
        s = s + x % 10;
        x = x / 10;
    } 
    cout << "Sum of digits is :" << s;
    return 0;
}