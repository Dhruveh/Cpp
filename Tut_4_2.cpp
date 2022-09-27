// 2. create an array of object of three students.insert the information of all three students & display it on the screen.
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
        cout << " Enter SEM:\n";
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
    int n;
    student t[5];
    cout << "Enter the sutudent:-";
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        t[i].get();
        t[i].display();
    }

    return 0;
}