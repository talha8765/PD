#include<iostream>
#include<string>
using namespace std;

int number=0;
bool isRepeating(int number,int arr[],int length);
main(){
    cout<<"Enter the length of the array: ";
    cin>>number;
    int arr[number];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i = 0 ; i < number ; i++)
    {
        cin>>arr[i];
    }
    int length;
    cout<<"Enter the length of the cycle: ";
    cin>>length;
    bool result=isRepeating(number,arr,length);
    cout<<"Output: "<<result;
}
bool isRepeating(int number,int arr[],int length)
{
    bool result;
     if(length>number)
        {
            result=true;
        }
        else
        {
    for(int i = 0 ; i < length ; i++)
    {
        if(i+length>length)
        {
            break;
        }
        else if(arr[i]==arr[i+length])
        {
            result=true;
        }
        else
        {
            result=false;
        }
    }
        }
    return result;
}