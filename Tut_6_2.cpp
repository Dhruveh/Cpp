// 2) write a cpp program that demonstrates the use of multilevel inheritance.
#include <iostream>
using namespace std;

class A
{
public:
    void demo()
    {
        int b = 5;
        cout << b;
    }
};
class B : public A
{
};
class C : public B
{
};

int main()
{
    C c;
    c.demo();
    return 0;
}