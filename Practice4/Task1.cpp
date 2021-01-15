#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int p;

    cout << "Powers of 2:" << endl;
    
    for(int i=0; i<=16; i++)
    {
        p=pow(2,i);
        
        cout << "2 to the power of " << i << " is " << p << endl;
    }

    return 0;
}