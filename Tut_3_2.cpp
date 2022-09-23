// 2.Write a cpp program to add two values by using function overloding.
#include <iostream>
using namespace std;

int sum(int, int);
float sum(int, float);
float sum(float, float);

int main()
{
    int a1, b1, a;
    float a2, b2, b;

    cout << "Enter the value \n";
    cin >> a1 >> b1 >> a;
    cout << "Enter the value \n";
    cin >> a2 >> b2 >> b;
    cout << endl
         << "sum of int value:\n"
         << sum(a1, b1);
    cout << "sum of int and float value:\n"
         << sum(a, b);
    cout << "sum of float value:"
         << sum(a2, b2);

    return 0;
}

int sum(int a1, int b1)
{
    return (a1 + b1);
}

float sum(int a, float b)
{
    return (a + b);
}

float sum(float a2, float b2)
{
    return (a2 + b2);
}