// 7.Write a cpp program input three number and display average of them.
#include <bits/stdc++.h>
using namespace std;

int main()
{
     int num1, num2, num3;
     cout << "Enter the first number :\n";
     cin >> num1;
     cout << "Enter the second number :\n";
     cin >> num2;
     cout << "Enter the third number :\n";
     cin >> num3;
     int result = (num1 + num2 + num3) / 3;
     cout << result << " is average";
     return 0;
}