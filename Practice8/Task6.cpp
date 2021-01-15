#include <iostream>

using namespace std;

int multiplying1(int, int, int);
void multiplying2(int, int, int &);
void multiplying3(int, int, int *);

int main(){

    int a = 2, b = 5, c = 0;

    cout << "a = " << a << "\t" << &a << endl;
    cout << "b = " << b << "\t" << &b << endl;
    cout << "c = " << c << "\t" << &c << endl;
    cout << endl;

    multiplying1(a, b, c);
    cout << "c = " << c << "\t" << &c << endl;
    cout << endl;
    c=0;

    multiplying2(a, b, c);
    cout << "c = " << c << "\t" << &c << endl;
    cout << endl;
    c=0;

    int *pointc = &c;
    multiplying3(a, b, pointc);
    cout << "c = " << c << "\t" << &c << endl;
    
    return 0;
}

int multiplying1(int a, int b, int c){
    c = a*b;
    return c;
}

void multiplying2(int a, int b, int &c){

    c = a*b;
}

void multiplying3(int a, int b, int *c){

    *c =a*b;
}
