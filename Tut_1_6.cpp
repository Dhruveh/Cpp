// 6.Write a cpp program to calculate area of circle,area of triangle,simple interest in one program.
// formulas : area of circle : pi*r*r
// 		   area of traingle : 1/2*b*h
// 		   simple interest : p*r*n/100
#include <iostream>
#define PI 3.14
using namespace std;

int main()
{
    int red, p, r, n, b, h, res;
    int a;
    cout << "Enter 1:circle\n Enter 2:trangle\n Enter 3:interest\n";
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "Enter the redius:";
        cin >> r;
        res = PI * r * r;
        cout << res << " is area of circle";
        break;
    case 2:
        cout << "Enter base :\n";
        cin >> b;
        cout << "Enter height :\n";
        cin >> h;
        res = (1 * b * h) / 2;
        cout << res << " is area of triangle";
        break;
    case 3:
        cout << "Enter the principal amount :\n";
        cin >> p;
        cout << "Enter the rate of interest :\n";
        cin >> r;
        cout << "Enter the number of years :\n";
        cin >> n;
        res = (p * r * n) / 100;
        cout << res << " is simple interest";

    default:
        cout << "Enter the valid number";
        break;
    }

    return 0;
}