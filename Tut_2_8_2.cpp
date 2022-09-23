/*	1   2   3   4   5
    1	2	3	4
	1	2	3
	1	2
	1 */ 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    for (a = 5; a >= 1; a--)
    {
        for (int space = 1; space <= a; space++)
        {
            cout<<"";
        }
        
        for (b = 1; b <= a; b++) 
        {
            cout <<"  "<<b;
        }
        cout << endl;
    }
    return 0;
}
