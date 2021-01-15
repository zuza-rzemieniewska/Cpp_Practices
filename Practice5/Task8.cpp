#include <iostream>
#include <iomanip>

using namespace std;

bool prime_number(int);

int main(){

    int arr[20];
    int n = 0;

    for(int i = 2; i=i; i++){

        if(n == 20){
            break;
        }

        if(prime_number(i) == true){
            arr[n]=i;
            n++;      
        }    
    }

    for(int j=0; j<20; j++){
        cout << arr[j] << setw(4);
    }

    cout << endl;

    return 0;
}

bool prime_number(int a){

    if(a==2){
        return true;
    }
    for(int i = 2; i<a; i++){
        
        if(a%i == 0)
            return false;
    }
    return true;
}