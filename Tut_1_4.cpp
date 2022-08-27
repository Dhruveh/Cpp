// 4.Write a cpp program whether number is odd or even.
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the number : ";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << a << "is even";
    }
    else
    {
        cout << a << "is odd";
    }

    return 0;
}