#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>

using namespace std;

int main() {

    float n, r, d;

    cout << "Please enter an angle in degrees:" << endl;
    cin >> n;
    r = (n*M_PI)/180 ;
    cout << "Sinus of your angle is: " << sin(r) << endl;
    cout << "Cosinus of your angle is: " << cos(r) << endl;

    return 0;
}