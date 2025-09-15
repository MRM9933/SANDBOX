#include <iostream>

using namespace std;
int main(){
    double miles;
    double gallons;
    double mpg;
//prompt user for miles

cout<<" enter miles: ";
//readmiles
cin>> miles;
//if miles < )
if(miles<=0){
    cout<< " do better "<< endl;
} else{
    //prompt the user for gallons
    cout<<" Enter gallons: ";
    //read gallons
    cin >> gallons;
//if gallons <=0
if (gallons<=0){
    //print error message
    cout<<"do bettter" << endl;
} else{
//mpg equals miles per gallon
mpg=miles/gallons;
cout<<" Miles Per gallons is:" << mpg << endl;
}

}

return 0;
}

