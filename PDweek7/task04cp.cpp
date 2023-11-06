#include<iostream>
using namespace std;

int generateDots(int number);
main(){
    int number;
    cout<<"Enter number of Triangle: ";
    cin>>number;
    int result=generateDots(number);
    cout<<"Dots in the Triangle: "<<result;
}
int generateDots(int number)
{
    int result=0;
    for(int x=0; x<=number; x++){
        result=result+x;
    }
    return result; 
}
