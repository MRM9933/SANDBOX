#include <iostream>

using namespace std;

int main(){




double hrs;
double sal;
double rte = 7.50;

cout<< " How many hours did you work?";
cin >> hrs;
if (hrs <= 0){
    cout<<"u a bum"<< endl;
    return 0;
}
if(hrs <=40){
    sal = hrs*rte;
}
else{
    sal = 40*rte+(hrs-40)*rte*1.5;
}

cout<< " your calculated salary: "<< sal<< endl;



return 0;

}