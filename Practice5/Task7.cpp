#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    //first way with for loop
    cout << "Multiplication table: " << endl;
    cout << setw(4);

    for(int i=1; i<=10; i++){

        for(int j=1; j<=10; j++){
            cout << i*j << setw(4);
        }

        cout << endl;
    }

    //second way with an array
    int arr[10][10];

    cout << "Multiplication table: " << endl;
    cout << setw(4);
    
    for(int i=1; i<=10; i++){

        for(int j=1; j<=10; j++){
            arr[i-1][j-1] = i*j;
            cout << arr[i-1][j-1] << setw(4);
        }

        cout << endl;
    }

    return 0;
}