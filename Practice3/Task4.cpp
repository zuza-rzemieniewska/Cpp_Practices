#include <iostream>

using namespace std;

int main(){

    float a, b, c;

    do{
        cout << "Please enter three segments a, b and c greater than 0:" << endl;
        cin >> a >> b >> c;

    }while(a<=0 || b<=0 || c<=0);

    if(a+b>c && a+c>b && c+b>a)

        cout << "From length segments: " << a << ", " << b << ", " << c << " triangle could be build" << endl;
    
    else
        cout << "From length segments: " << a << ", " << b << ", " << c << " triangle couldn't be build" << endl;

    return 0;
}