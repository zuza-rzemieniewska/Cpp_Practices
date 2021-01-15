#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int x, a, n, sum=0, i=0;
    
    cout << "Enter the integer: " << endl;
    cin >> x;

    a = abs(x);
    x = abs(x);

    while(x>0){
       
       n=x%10;
       x=x/10;
       sum = sum + n;
       i++;
    }

    cout << "The absolute value is " << a << " the given number has " << i << " digits and the sum of them is " << sum << endl;

    return 0;
}