#include <iostream>

using namespace std;

int main() {

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "First element of array is " << arr[0] << endl;
    cout << "Fourth element of array is " << arr[3] << endl;
    cout << "Last element of array is " << arr[9] << endl;

    for(int i=0; i<10; i++)
        cout << "arr[" << i << "] = " << arr[i] << endl;

    cout << endl;

    for(int j=9; j>=0; j--)
        cout << "arr[" << j << "] = " << arr[j] << endl;

    return 0;
}