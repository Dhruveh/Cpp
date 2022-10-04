// 6) write a cpp program that demonstrates the use of virutal base class.
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
class B : public virtual A
{

public:
    void demo2()
    {
        cout << "My friend name is parth";
    }
};
// class 3
class C : public virtual A
{
};
// class 4
class D : public B, public C
{
public:
    void demo3()
    {
        demo();
        demo2();
    }
};
int main()
{
    D d;
    d.demo3();
    return 0;
}