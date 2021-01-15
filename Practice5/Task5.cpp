#include <iostream>

using namespace std;

int main() {

    int n;
    
    cout << "Please define size of array:" << endl;
    cin >> n;
    
    char arr[n];

    int i=0;
    do{
        cout << "Please enter character for array[" << i << "]: ";
        cin >> arr[i];
        i++;
    }while(i<n);

    cout << "Your first element: " << arr[0] << ", address of first element: " << &arr[0] << endl; //adres dla char się nie wyświetla
    cout << "Your last element: " << arr[n-1] << ", address of last element: " << &arr[n-1]<< endl;
    
    return 0;
}