#include <iostream>

using namespace std;

int gcd_rec(int, int);

int main() {

    int a, b;
    
    cout << "Enter two integer numbers greater than 0" << endl;
    cin >> a >> b;
    
    if(a<0 || b<0)
        cout << "Error. Numbers are not greater than 0." << endl;

    else{
        cout << "The greatest common divisor is " << gcd_rec(a, b) << endl;
    }

    return 0;
}

int gcd_rec(int a, int b){

    if(a==0 || b==0)
        return a+b;

    else if(a>b)
        return gcd_rec(a%b, b);

    else
        return gcd_rec(a, b%a);

}

