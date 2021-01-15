#include <iostream>

using namespace std;

int main() {

    bool m, n;
    int p, q; 

    cout << "Please enter p:" << endl;
    cin >> p;
    cout << "Please enter q:" << endl;
    cin >> q;

    m = !(p&&q)==!p||!q;
    cout << "!(p&&q)==!p||!q : " << m << endl;
    
    n = !(p||q)==!p&&!q;
    cout << "!(p||q)==!p&&!q : " << n << endl;

    return 0;
}