#include <iostream>
#include <iomanip>

using namespace std;

void generator99(int [], int);

void sort(int [], int);

void print(int [], int);

float median(int [], int);

int main() {

    int n;
    cout << "Please define size of array:" << endl;
    cin >> n;
    
    int arr[n];
    generator99(arr, n);

    cout << "Your array:" << endl;
    print(arr, n);
    sort(arr, n);

    cout << "Your array sorted:" << endl;
    print(arr, n);

    cout << "Median of array is " << median(arr, n) << endl;
    
    return 0;
}

void generator99(int a[], int n){

    srand(time(0));
    
    for(int i=0; i<n; i++){
        a[i] = rand()%100;
    }
}

void sort(int a[], int n){
    
    int min;

    for(int i=0; i<n; i++){
        min = a[i];
        for (int j = i+1; j<n; j++){
            if(min > a[j]){
                min = a[j];
                swap(a[i], a[j]);
            }
        }
    }
}

void print(int a[], int n){
    
    for(int i=0; i<n; i++){

        cout << a[i] << setw(4);
    }
    cout << endl;
}

float median(int a[], int n){
   
    float median;

    if(n%2==0){
        median = (a[n/2]+a[(n/2)-1])/2.0;
    }
    else{
        median = a[n/2];
    }

    return median;
}