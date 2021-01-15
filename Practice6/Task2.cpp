#include <iostream>

using namespace std;

int multiplies1(int, int);

int main() {

    int a, b;
    
    cout << "Enter two numbers to multiples these:" << endl;
    cin >> a >> b;
    cout << "The result of the multiplication is " << multiplies1(a, b) << endl;

    return 0;
}

int multiplies1(int a, int b){
    return a*b;
}