#include <iostream>
using namespace std;

int main() {

    int a = 5;
    int b = 7;
    
    cout << "a = " << a << "\t address: " << &a << endl;
    cout << "b = " << b << "\t address: " << &b << endl;
    cout << endl;

    int &refa = a;
    a=10;
    b=14;
    cout << "a = " << a << "\t address: " << &a << endl;
    cout << "b = " << b << "\t address: " << &b << endl;
    cout << "refa = " << refa << "\t address: " << &refa << endl;
    
    if(&a == &refa)
        cout << "Great, you got the reference fight." << endl;

    return 0;    
}