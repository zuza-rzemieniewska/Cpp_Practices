#include <iostream>
#include <iomanip>

using namespace std;

void generator(int [], int);

void print(int [], int);

int sum(int [], int);

int main() {

    int arr[20];
    
    generator(arr, 20);
    print(arr, 20);
    sum(arr, 20);

    cout << "Sum of array is " << sum(arr, 20) << endl;
    
    return 0;
}

void generator(int a[], int n){

    srand(time(0));
    
    for(int i=0; i<n; i++){
        a[i] = rand()%100;
    }
}

void print(int a[], int n){
    
    for(int i=0; i<n; i++){
        cout << a[i] << setw(4);
    }
    cout << endl;
}

int sum(int a[], int n){
   
    int sum = 0;

    for(int i=0; i<n; i++){
        sum = sum + a[i];
    }

    return sum;
}