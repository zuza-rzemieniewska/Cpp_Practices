#include <iostream>
#include <iomanip>

using namespace std;

int Fibonacci(int);

int main() {

    int n;

    cout << "Please enter number of elements in Fibonacci sequence: " << endl;
    cin >> n;

    for(int i=1; i<=n; i++){

        cout << Fibonacci(i) << setw(4);
    } 

    cout << endl;
    
    return 0;
}

int Fibonacci(int i){

    if(i == 1)
       return 0;
        
    else if(i == 2)   
        return 1; 

    else return Fibonacci(i-1)+Fibonacci(i-2);
    
}