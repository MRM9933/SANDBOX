#include <iostream>

using namespace std;

int main(){




double hrs;
double sal;
double rte = 7.50;

cout<< " How many hours did you work?";
cin >> hrs;
while (hrs > 0){
    

if(hrs <=40){
    cout << " You worked regular amount of hours"<< endl;
    sal = hrs*rte;
} else{
    cout<< "you worked overtime"<< endl;
    sal = 40*rte+(hrs-40)*rte*1.5;
}

cout<< " your calculated salary: "<< sal<< endl;



return 0;

}

}