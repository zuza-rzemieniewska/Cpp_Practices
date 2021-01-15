#include <iostream>

using namespace std;

int main() {

    float a, b;

    cout << "Please enter first number:" << endl;
    cin >> a;
    cout << "Please enter second number:" << endl;
    cin >> b;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << b << " - " << a << " = " << b - a << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    cout << b << " / " << a << " = " << b / a << endl;

    return 0;    
}