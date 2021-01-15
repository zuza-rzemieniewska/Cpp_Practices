#include <iostream>
#include <iomanip>

using namespace std;

void generator6(int [], int);

int main() {

    int n = 1000;
    int arr[n];
    int one=0, two=0, three=0, four=0, five=0, six=0;

    generator6(arr, n);
    for(int i=0; i<n; i++){
        switch(arr[i]){
            case 1: 
                one++; 
                break;
            case 2: 
                two++; 
                break;
            case 3: 
                three++; 
                break;
            case 4: 
                four++; 
                break;
            case 5: 
                five++; 
                break;
            case 6: 
                six++; 
                break;
        }
    }

    cout << "Numbers of ones: " << one << ", two: " << two << ", threes: " << three << ", fours: " << four;
    cout << ", fives: " << five << ", six: " << six << endl;

    return 0;
}

void generator6(int a[], int n){

    srand(time(0));
    for(int i=0; i<n; i++){
        a[i]=rand()%6+1;
    }
    
}
