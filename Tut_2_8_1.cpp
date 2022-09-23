// 8.Write a cpp program to print pattern as given below :
// 	1
// 	1	2
// 	1	2	3
// 	1	2	3	4   
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    for (a = 1; a <= 5; a++)
    {
        for (b = 1; b <= a; b++)
        {
            cout<<" ";
            cout <<b;
        }
        cout<<endl;
    }
    return 0;
}