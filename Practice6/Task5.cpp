#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n;

    cout << "Please enter number of elements in Fibonacci sequence: " << endl;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){

        if(i == 0)
            arr[0]=0;
        
        else if(i == 1)   
            arr[1]=1; 

        else
            arr[i]=arr[i-1]+arr[i-2];
        
        cout << arr[i]<< setw(4);

    } 

    cout << endl;
    
    return 0;

}