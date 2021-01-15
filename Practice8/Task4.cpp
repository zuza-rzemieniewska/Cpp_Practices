#include <iostream>
using namespace std;

int main() {

    int arr[3] = {4, 77, 245};
    
    cout << "arr[0] = " << *arr << "\t address: " << arr << endl;
    cout << "arr[1] = " << *(arr+1)<< "\t address: " << arr+1 << endl;
    cout << "arr[2] = " << *(arr+2) << "\t address: " << arr+2 << endl;
  
    return 0;    
}