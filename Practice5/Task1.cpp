#include <iostream>

using namespace std;

int main() {

    // by specifying size
    int arr1[5] = {1, 58, 554, 54, 23};

    for(int i=0; i<5; i++)
        cout << "Array1[" << i << "] = " << arr1[i] << endl;

    cout << endl;

    // specified by a user
    int n;
    cout << "Please define size of Array2:" << endl;
    cin >> n;
    int arr2[n];
    cout << "Please enter values to Array2:" << endl;
    for(int j=0; j<n; j++)
    {
        cin >> arr2[j];
    }
    for(int k=0; k<n; k++)
    {
        cout << "Array2[" << k << "] = " << arr2[k] << endl;
    }    

    cout << endl;

    // by initializing elements
    int arr3[] = {34, -6, 1, 58, 554, 54, 23};
    int m = sizeof(arr3)/sizeof(arr3[0]);

    for(int l=0; l<m; l++)
    {
        cout << "Array3[" << l << "] = " << arr3[l] << endl;
    }

    return 0;
}