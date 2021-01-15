#include <iostream>
using namespace std;

int main() {

    bool my_bool = true;
    char my_char = 'a';
    int my_int = 5;
    float my_float = -1.11119;
    double my_double = 727663928.9372689;

    cout << "Data type boolean has value equels " << my_bool << " and size equals " << sizeof(my_bool) << endl;
    cout << "Data type character has value equels " << my_char << " and size equals " << sizeof(my_char) << endl;
    cout << "Data type intiger has value equels " << my_int << " and size equals " << sizeof(my_int) << endl;
    cout << "Data type floating point has value equels " << my_float << " and size equals " << sizeof(my_float) << endl;
    cout << "Data type double floating point has value equels " << my_double << " and size equals " << sizeof(my_double) << endl;

    return 0;    
}