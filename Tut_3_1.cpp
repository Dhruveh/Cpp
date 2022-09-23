// 1.Write a cpp program to make calculator by using function.
#include <iostream>
using namespace std;

// function
void add();
void sub();
void mul();
void div();

int main()
{

    int n;
    cout << "press 1 for addition" << endl;
    cout << "press 2 for subtraction" << endl;
    cout << "press 3 for multiplicaction" << endl;
    cout << "press 4 for division" << endl;
    cin >> n;

    switch (n)
    {
    case 1:
        add();

        break;
    case 2:
        sub();

        break;
    case 3:
        mul();
        break;
    case 4:
        div();
        break;
    default:
        cout << "invalid.\n";
        break;
    }

    return 0;
}
void add()
{
    int a, b;
    cout << "Enter first number:";
    cin >> a;
    cout << "Enter second number:";
    cin >> b;
    cout << "addition : "
         << a + b;
}
void sub()
{
    int a, b;
    cout << "Enter first number:";
    cin >> a;
    cout << "Enter second number:";
    cin >> b;

    cout << "substraction : "
         << a - b;
}
void mul()
{
    int a, b;
    cout << "Enter first number:";
    cin >> a;
    cout << "Enter second number:";
    cin >> b;

    cout << "multiplicaction : " << a * b;
}
void div()
{
    int a, b;
    cout << "Enter first number:";
    cin >> a;
    cout << "Enter second number:";
    cin >> b;

    cout << "division:" << a / b;
}