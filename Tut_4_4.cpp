// 4. define a class for bank account having data members name,account no.,balance.Get data from the user & make functions to assign the values, display the name & balance ,a function of withdraw amount.
#include <iostream>
using namespace std;

class bank
{
public:
    char name[20];
    int ac, am;
    int bal;
    void get()
    {
        cout << "Enter your name:";
        cin >> name;
        cout << "Enter account number:";
        cin >> ac;
        cout << "Enter your balance:";
        cin >> bal;
    }
    void display()
    {
        cout << "Name :"
             << name;
        cout << "\nAccount NO :"
             << ac;
        cout << "\nBalance :"
             << bal;
    }
    void withdrow()
    {
        cout << "\nEnter amount of money that you want to withdrow :";
        cin >> am;
        if (am < bal)
        {
            cout << endl
                 << "Total balance :" << bal - am;
        }
        else
        {
            cout << endl
                 << "ERROR ! amount limit exceede";
        }
    }
};
int main()
{
    bank u;
r:
    u.get();
    u.display();
    u.withdrow();
    int opt;
    cout << "\nEnter 1 to continue or Enter 2 to exit :::";
    cin >> opt;
    if (opt == 1)
    {
        goto r;
    }
    return 0;
}