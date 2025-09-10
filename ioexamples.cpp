#include <iostream>

using namespace std;

int main(){

    double x = 99090.076024708104;
    cout << x << endl;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << x << endl;
    x = 1.0;
    cout << x << endl;
    cout.setf(ios :: showpoint);
    cout.precision(0);
    cout << x << endl;


    


    return 0;
}