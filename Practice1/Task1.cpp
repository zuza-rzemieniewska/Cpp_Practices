#include <iostream>
#include <string>
using namespace std;

int main() {

    int a;
    int b;

    /*
    cout << "Please enter two intiger numbers: " << endl;
    cin >> a >> b;
    cout << "Your number: " << a << ", " << b << endl;
    */

    printf("Please enter two intiger numbers: \n");
    scanf("%d %d", &a, &b);
    printf("Your number: %d, %d \n", a, b);

    return 0;    
}