#include <iostream>
using namespace std;


int main(){
   char choice;
   cout<< " pick a direction (N S E W): ";
   cin >> choice;
   choice = toupper(choice);
   switch (choice){
 case 'N':
    cout<< " you arrive in a polar region covered in snow and are attacked by vicious polar bears"<< endl;
    break;
case 'S':
     cout<< " You are attacked by a mob of kangaroos, the joey gets the last blow"<< endl;
     break;
case 'E':
     cout<< " You have been recognized as the long lost aztec king and have been gifted 17 latina baddies"<<endl;
     break; 
case 'W':
    cout<< " welcome to sunny California baby"<< endl;
    break;
 }

   
    return 0;
}