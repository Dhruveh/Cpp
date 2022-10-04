// 4) write a cpp program that demonstrates the use of hirarchical inheritance.
#include <iostream>
using namespace std;
class a
{
public:
    int a = 2;
};
class b : public a
{
public:
    void getB()
    {
        cout << "\n first child class [B]";
        cout << "\n a = " << a;
    }
};
class c : public a
{
public:
    void getC()
    {
        cout << "\n second child class [C]";
        cout << "\n a = " << a;
    }
};
int main()
{
    b obj1;
    c obj2;
    obj1.getB();
    obj2.getC();
    return 0;
}