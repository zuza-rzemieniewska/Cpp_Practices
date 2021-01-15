#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int x, rev=0;
    
    cout << "Enter the integer: " << endl;
    cin >> x;

    while (x) {
		rev = 10 * rev + x % 10;
		x = x/10;
	}
    
    cout << "Reverse number: " << rev << endl;

    return 0;
}