#include <iostream>
using namespace std;

int main(){

    int x, y;

    cout << "Enter two integer numbers x and y: " << endl;
    cin >> x >> y;

    if(x < y){
        cout << x << " is less than " << y << endl;
    }
    else if(x > y){
        cout << x << " is greater than " << y << endl;
    }
    else{
        cout << x << " is equal " << y << endl;
    }

    return 0;
}