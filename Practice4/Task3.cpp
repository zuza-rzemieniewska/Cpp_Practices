#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;
    float a;
    char t;
    
    do{
        cout << "Enter the  number of numbers you want to count the average of: " << endl;
        cin >> n;

        if(n<=0){
            
            cout << "The number of numbers must be positive!" << endl;

        }
        else{

            float sum = 0;
            int i = 1;

            while(i<=n)
            {
                cout << "Enter numer:" << endl;
                cin >> a;
                sum = sum + a;
                i++;
            }

            cout << "Arithmentic mean of " << n << " numbers is " << sum/n << endl;

        }

        cout << "If you want to count the average again, press T" << endl;
        cin >> t;

    }while(t=='t'||t=='T');

    return 0;
}