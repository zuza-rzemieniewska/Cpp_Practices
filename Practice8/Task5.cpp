#include <iostream>
using namespace std;

int main() {

    int arr[10] = {4, 77, 245, 2, 85, 47, 1, 679, 14, 10};
    
    for(int i=0; i<10; i++){

        cout << "arr["<< i << "] = " << *(arr+i) << "\t address: " << arr+i << endl;
    }

  
    return 0;    
}