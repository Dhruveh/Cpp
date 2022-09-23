// 3.Write a cpp program to accept one number form user & find it is armstrong or not.
#include <iostream>
using namespace std;

int main()
{
    int arm = 0, a, n, temp;
    cout << "Enter the number :";
    cin >> n;
    temp = n;
    while (temp > 0)
    {
        a = temp % 10;
        temp = (temp / 10);
        arm = arm + a * a * a;
    }
    if (arm == n)
    {
        cout << "Number is Armstrong";
    }
    else
    {
        cout << "Number is not Armstrong";
    }
    return 0;
}