#include <iostream>

using namespace std;

int main(){

    int x;

    cout << "Enter an integer number: " << endl;
    cin >> x;
    
    if(x%2 == 0){
        cout << x << " is even number" << endl;
    }
    else{
        cout << x << " is odd number" << endl;
    }

    return 0;
}