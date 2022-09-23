/*	1	2	3	4	5	4	3	2	1
        1	2	3	4	3	2	1
            1	2	3	2	1
                1	2	1
                    1*/
#include <iostream>
using namespace std;

int main()
{
    int raw, col, max = 5;
    for (raw = 1; raw <= 5; raw++)
    {
        for (col = 1; col <= raw; col++)
        {
            cout << " ";
        }
        for (col = 1; col <= max; col++)
        {
            cout << col;
        }
        for (col = 1; col <= max; col++)
        {
            if (max - col == 0)
            {
                break;
            }

            cout << max - col;
        }
        max--;
        cout << endl;
    }

    return 0;
}