// 2.Write a cpp program to reverse of given numbers.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, rem, rev = 0;
    cout << "Enter the number :";
    cin >> num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rem + (rev * 10);
        num = num / 10;
    }
    cout << "Reverse number is :" << rev;
    return 0;
}