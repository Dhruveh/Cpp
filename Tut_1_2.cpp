// 2.Write a cpp program that input three number and max & min amoung given number.
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;

    if (a >= b)
    {
        if (a >= c)
            cout << a << "is maximum \n ";
        else
            cout << c << "is maximum \n ";
    }
    else
    {
        if (b >= c)
            cout << b << "is maximum \n ";
        else
            cout << c << "is maximum \n";
    }

    return 0;
}