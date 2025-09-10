#include <iostream>

using namespace std;

int main(){
    double temp;
    cout << " enter the temperature ";
    cin >> temp;
    cout<< " temp: "<< temp << endl;

    if(temp<40){
            cout<< " Its a Wraith! "<< endl;
        }

        else if(temp == 60){
         cout<<" its a hantu "<< endl;
         }

         else{
            cout<< " Its a Ghoul "<< endl;
         }
         return 0;
        }