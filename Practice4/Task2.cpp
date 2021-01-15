#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n, i=1;
    float a, sum = 0;
    
    cout << "Enter the  number of numbers you want to count the average of: " << endl;
    cin >> n;
    
    if(n<=0){
        
        cout << "The number of numbers must be positive!" << endl;
        cin >> n;
    }

    /*
    while(i<=n){
        cout << "Enter numer: ";
        cin >> a;
        sum += a;  
        i++;
    } */

    for(i; i<=n; i++){
        cout << "Enter numer: ";
        cin >> a;
        sum += a;  
    }

    cout << "Arithmentic mean of " << n << " numbers is " << sum/n << endl;

    return 0;
}