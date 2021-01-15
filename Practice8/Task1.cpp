#include <iostream>
using namespace std;

int main() {

    int a = 5;
    float b = 5.7;
    double c = 234.543;

    cout << "a = " << a << "\t address: " << &a << endl;
    cout << "b = " << b << "\t address: " << &b << endl;
    cout << "c = " << c << "\t address: " << &c << endl;

    return 0;    
}