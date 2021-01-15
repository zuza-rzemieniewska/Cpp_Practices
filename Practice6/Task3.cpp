#include <iostream>

using namespace std;

int gcd(int, int);

int main() {

    int a, b;
    
    cout << "Enter two integer numbers greater than 0" << endl;
    cin >> a >> b;
    
    if(a<0 || b<0)
        cout << "Error. Numbers are not greater than 0." << endl;

    else if(a==b){
        cout << "The greatest common divisor is " << a << endl; //to nie jest konieczne ale przyśpieszy znalezienie rozwiazania
    }
    else{
        cout << "The greatest common divisor is " << gcd(a, b) << endl;
    }

    return 0;
}

int gcd(int a, int b){

    while(a!=0 && b!=0)
    {
        if(a>b){

            a=a%b;
        }

        else if(b>a){

            b=b%a;
        }
    }
    return a+b;
}