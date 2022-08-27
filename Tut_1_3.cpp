// 3.Write a cpp program to check wheather number is positive or nagative.
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (num > 0)
        cout << "The number is positive";
    else if (num < 0)
        cout << "The number is negative";
    else
        cout << "Zero";

    return 0;
}