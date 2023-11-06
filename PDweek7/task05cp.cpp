#include<iostream>
using namespace std;

bool Prime(int number);
main(){
    int number;
    cout<<"Enter Number: ";
    cin>>number;
    bool result=Prime(number);
    cout<<result;
}
bool Prime(int number){
    int primeNum=0;
    for(int c=1 ; c<number ; c++){
        if(number%c==0){
            primeNum=primeNum+1;
        }
    }
    if(primeNum==1)
    {return true;}
    else
    {return false;}
}
