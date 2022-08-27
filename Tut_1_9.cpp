// 9.Write a cpp program to exchange value between two variable (with & without using third variable).
#include <iostream>
using namespace std;
int main()
{
     int a, b;
     cout << "Enter two numbers : " << endl;
     cin >> a >> b;
     cout << "Before swap : a = " << a << "\t"
          << "b = " << b;
     a = a + b; // a=30 (10+20)
     b = a - b; // b=10 (30-20)
     a = a - b; // a=20 (30-10)
     cout << "\nAfter swap : a = " << a << "\t"
          << "b = " << b;
     return 0;
}