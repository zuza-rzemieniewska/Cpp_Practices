#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float a, b, c, x1, x2, d;

    cout << "Please enter three numbers a, b and c to calculate x from ax^2 + bx + c = 0 :" << endl;
    cin >> a >> b >> c;

    if(a==0){
        
        x1 = (-c/b);
        cout << "Your function is linear, x = " << x1 << endl;

        return 0;
    }

    d=(b*b)-(4*a*c);

    if(d>=0){

        x1=(-b-sqrt(d))/(2*a);
        x2=(-b+sqrt(d))/(2*a);
        cout << "x1=" << x1 << endl;
        cout << "x2=" << x2 << endl;
    }
    else{

        cout << "Delta is less than 0, x1 and x2 not exist" << endl;
    }

    return 0;
} 