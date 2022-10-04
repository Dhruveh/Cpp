// 5) write a cpp program that demonstrates the use of hibrid inheritance.
#include <iostream>
using namespace std;

// class 1
class A
{
public:
    void demo()
    {
        cout << "My name is dhruvesh" << endl;
    }
};

// class 2
class B : public A
{

public:
    void demo2()
    {
        cout << "My fried name is parth";
    }
};
// class 3
class C
{
};
// class 4
class D : public B, public C
{
public:
    void demo3()
    {
        demo();
        cout << endl;
        demo2();
    }
};
int main()
{
    D d;
    d.demo3();
    return 0;
}