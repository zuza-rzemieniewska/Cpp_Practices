#include <iostream>
using namespace std;

int main() {

    float x = 35.715;
    float *p = &x;
    
    cout << "x = " << x << "\t address: " << &x << endl;
    cout << "p = " << *p << "\t address: " << p << endl;
  
    return 0;    
}