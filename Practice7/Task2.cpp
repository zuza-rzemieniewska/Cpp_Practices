#include <iostream>
#include <iomanip>

using namespace std;

void generator999(int [], int);

void print(int [], int);

int min(int [], int);

int max(int [], int);

int main() {

    int arr[20];
    
    generator999(arr, 20);
    print(arr, 20);

    cout << "Min of array is " << min(arr, 20) << endl;
    cout << "Max of array is " << max(arr, 20) << endl;
    
    return 0;
}

void generator999(int a[], int n){

    srand(time(0));
    
    for(int i=0; i<n; i++){
        a[i] = rand()%1000;
    }
}

void print(int a[], int n){
    
    for(int i=0; i<n; i++){
        cout << a[i] << setw(4);
    }
    cout << endl;
}

int min(int a[], int n){
   
    int minimum = a[0];

    for(int i=1; i<n; i++){
        if(minimum > a[i])
            minimum = a[i];
    }

    return minimum;
}

int max(int a[], int n){
   
    int maximum = a[0];

    for(int i=1; i<n; i++){
        if(maximum < a[i])
            maximum = a[i];
    }

    return maximum;
}