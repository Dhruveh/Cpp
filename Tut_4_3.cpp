// 3. define a class name reactangle & get values from the user & calculate & print the area of rectangle.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class rectangle
{
public:
    int l, b;

public:
    void get(int len, int br)
    {
        l = len;
        b = br;
    }
    void display()
    {
        cout << "Area of rectangle :" << l * b;
    }
};
int main()
{
    int x, y;
    rectangle k;
    cout << "Enter the 2 number :";
    cin >> x >> y;
    k.get(x, y);
    k.display();
    return 0;
}