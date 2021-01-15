#include <iostream>
#include <iomanip>

using namespace std;

void generator(int [], int);

void print(int [], int);

void printeven(int [], int);

int main() {

    int arr[20];
    
    generator(arr, 20);
    print(arr, 20);

    cout << "Even numers from array: " << endl;

    printeven(arr, 20);
    
    return 0;
}

void generator(int a[], int n){
    
    for(int i=0; i<n; i++){

        a[i] = rand()%21-10;
    }
}

void print(int a[], int n){
    
    for(int i=0; i<n; i++){

        cout << a[i] << setw(4);
    }
    cout << endl;
}

void printeven(int a[], int n){

    for(int i=0; i<n; i++){

        if(a[i]%2==0)
        cout << a[i] << setw(4);
    }
    cout << endl;
}