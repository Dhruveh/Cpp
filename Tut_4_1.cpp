// 1. define a class student & make funtions in this class to get & print name,semester & year of each student.
#include <iostream>
using namespace std;

class student
{
public:
    int year, sem;
    char name[20];

public:
    void get()
    {
        cout << "Enter YEAR:\n";
        cin >> year;
        cout << "Enter SEM:\n";
        cin >> sem;
        cout << "Enter NAME:\n";
        cin >> name;
    }
    void display()
    {
        cout << endl
             << "Student detail:-" << endl;
        cout << endl
             << "YEAR :" << year << endl;
        cout << "SEM:" << sem << endl;
        cout << "NAME:" << name << endl;
    }
};

int main()
{
    student t;
    t.get();
    t.display();
    return 0;
}