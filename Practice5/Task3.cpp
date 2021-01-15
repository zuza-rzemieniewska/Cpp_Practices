#include <iostream>

using namespace std;

int main() {

    int arr[5];

    cout << "Please enter five integers:" << endl;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    int sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
    float mean = sum/5.0;

    cout << "Arithetic mean of your integers is " << mean << endl;

    return 0;
}