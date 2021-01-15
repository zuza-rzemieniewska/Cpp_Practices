#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>

using namespace std;

int main() {

    float r, a;

    cout << "Please enter a circle radius to calculate a area of your circle:" << endl;
    cin >> r;
    a = M_PI*r*r;
    cout << "Your area of circle is:" << a << endl;

    return 0;
}