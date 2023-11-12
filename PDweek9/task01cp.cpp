#include<iostream>
using namespace std;

bool isLengthEven(string word);
main(){
    string word;
    cout<<"Enter a String: ";
    cin>>word;
    bool result=isLengthEven(word);
    cout<<result;
}
bool isLengthEven(string word)
{
    bool result;
    
    
        if(word.length()%2==0)
        {
            result = 1;
        }
        else 
        {
            result = 0;
        }
    
    return result;
    
}
