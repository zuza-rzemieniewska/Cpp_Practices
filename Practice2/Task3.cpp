#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>

using namespace std;

int main() {

    float a, d;

    cout << "Please enter a length of one side to calculate the diagonal of a square:" << endl;
    cin >> a;
    d = a*sqrt(2);
    cout << "Your the diagonal of a square is:" << d << endl;

    return 0;
}