// C++ Program to Find Largest of Two Numbers
#include <iostream>
using namespace std;

int main(){
    int x, y;
    
    // Asking for input
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    
    if (x > y){
        cout << x << " is greater than " << y;
    }
    else{
        cout << y << " is greater than " << x;
    }
    
    return 0;
}