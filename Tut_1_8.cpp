// 8.Write a cpp program that ask user to input age in year in display it in months and days.
#include <iostream>
using namespace std;

int main()
{
    int day_total = 0, dayl = 0, days = 0, age;
    int leap_y = 0, simple_y = 0;
    cout << "Enter your age : ";
    cin >> age;
    int current_year = 2022;
    int year = current_year - age;
    cout << year << endl;
    int month = age * 12;
    cout << "Your birthday Months : " << month;
    for (int i = year; i < current_year; i++)
    {
        if (i % 4 == 0)
        {
            leap_y++;
        }
        else
        {
            simple_y++;
        }
    }
    dayl = leap_y * 366;
    days = simple_y * 365;
    day_total = dayl + days;
    cout << endl
         << "Your birthday  Days : " << day_total;
    return 0;
}
