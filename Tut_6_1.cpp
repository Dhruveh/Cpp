// 1) write a cpp program that demonstrates the use of single level inheritance.
#include <iostream>
using namespace std;

class parent
{
public:
    int b;
};
class child : private parent
{
public:
    void d()
    {
        b = 6;
        cout << b;
    }
};
int main()
{
    child ch;
    ch.d();

    return 0;
}