#include <iostream>
#include <ctime>

using namespace std;

int main (){
    double roll;
    char choice;
    double chance;
    int counter = 0;

    srand(time(0));
    cout << "Roll the die? (Y/N) ";
    cin >> choice;
while (choice !='N') { 
    chance =(double)rand()/RAND_MAX;
    if (counter >=10){
        if ( chance <= 0.12){
            roll = 20;
        } else {
            cout<< " regular roll between 1-19"<< endl;
            roll = 1 + rand ()% 19;
        } else {
            if chance (chance <= 0.06){
            cout << " 6% chance of 20 "<< endl;
                
            }

        }
    
    
    return 0;
}