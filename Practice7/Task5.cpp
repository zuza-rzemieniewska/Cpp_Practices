#include <iostream>
#include <iomanip>

using namespace std;

void generator9(int [], int);

void print(int [], int);

int main() {

    int arr[10];
    generator9(arr, 10);

    cout << "Your numbers:" << endl;
    print(arr, 10);

    for(int i=0; i<10; i++){
        if(arr[i]==7){
            cout << "Great! You won!" << endl;
            break;
        }
    }
    
    return 0;
}

void generator9(int a[], int n){

    srand(time(0));
    
    for(int i=0; i<n; i++){
        a[i] = rand()%10;
    }
}

void print(int a[], int n){
    
    for(int i=0; i<n; i++){

        cout << a[i] << setw(4);
    }
    cout << endl;
}