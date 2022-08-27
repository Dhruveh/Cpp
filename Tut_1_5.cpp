// 5.Write a cpp program that takes input of year digit determine whether the year is leapyear or not.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cout << "Enter the year :";
    cin >> year;
    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " is leapyear";
    }
    else
    {
        cout << year << " is not leapyear";
    }

    return 0;
}