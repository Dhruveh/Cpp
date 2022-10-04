// 3) write a cpp program that demonstrates the use of multiple inheritance.
#include <iostream>
using namespace std;

// class 1
class A
{
public:
    void demo()
    {
        cout << "This is A class demo method" << endl;
    }
};

// class 2
class B
{

public:
    void demo2()
    {
        cout << "This is b class demo2 method";
    }
};
// class 3
class C : public A, public B
{
public:
    void demo3()
    {
        demo2();
    }
};
int main()
{
    C c;
    c.demo();
    c.demo3();
    return 0;
}