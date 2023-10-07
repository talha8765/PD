/*Identification and recognizing scope of global variables & local variables*/
#include<iostream>
using namespace std;

int x=10;
void myFunction()
{
    cout<<"The value of the x is: "<< x;         //The value of the x is: 10
    int x= 20;
}
main()
{
     myFunction();
     int x= 30;
     cout<<"The value of the x is: "<<x;          //The value of the x is: 30
     myFunction();
    
}