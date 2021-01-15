#include <iostream>

using namespace std;

int main(){

    float length;
    int unit;
    
    do{
        cout << "Please enter length greater than 0: " << endl;
        cin >> length;

    }while(length<=0);

    do{
        cout << "What unit?" << endl << "0-mm" << endl << "1-cm" << endl << "2-m" << endl;
        cin >> unit;

    }while(unit != 0 && unit != 1 && unit != 2);

    switch(unit){
        case 0:
            cout << length << "mm, " << length/10 << "cm, " << length/1000 << "m" <<endl;
            break;
        case 1:
           cout << length << "cm, " << length*10 << "mm, " << length/100 << "m" <<endl;
            break;
        case 2:
            cout << length << "m, " << length*1000 << "mm, " << length*100 << "cm" <<endl;
            break;
        default:
            cout << "You enter the wrong value" << endl;
            break;
    }

    return 0;
}