#include <iostream>

using namespace std;

int main() {

    int arr[5];
    int m;

    cout << "Please enter five integers:" << endl;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    cout << "Please enter a multiplier to mutiple all elements in array" << endl;
    cin >> m;

    for(int i=0; i<5; i++){

        cout << "arr[" << i << "] = " << arr[i] << endl;
        arr[i] = arr[i]*m;      //każdy element tablicy jest nadpisany swoją wartością pomnożoną przez m

    }
    cout << endl;

    for(int j=0; j<5; j++){

        cout << "arr[" << j << "] = " << arr[j] << endl;

    }
    cout << endl;
    
    return 0;
}