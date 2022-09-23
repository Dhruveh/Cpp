// 3.Write a cpp program to swep to valuvs (using call by values & call my reference).
//  call by value
#include <iostream>
using namespace std;

void swap(int, int);
int main()
{
    int a, b;
    cout << "Enter the first number:";
    cin >> a;
    cout << "Enter the second number:";
    cin >> b;

    swap(a, b);

    return 0;
}
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After sweap \n";
    cout << "first :" << a << endl;
    cout << "second :" << b;
}