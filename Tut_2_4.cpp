// 4.Write a cpp program to accept one number from user & find it is prime or not.
#include <iostream>
using namespace std;

int main()
{
     int num, i, check = 0;
     cout << "Enter the number :";
     cin >> num;
     for (i = 2; i < num; i++)
     {
          if (num % i == 0)
          {
               check++;
               break;
          }
     }
     if (check == 0)
     {
          cout << "Number is prime";
     }
     else
     {
          cout << "Number is not prime";
     }
     return 0;
}