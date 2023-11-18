#include<iostream>
using namespace std;

int rotations(int length, string arr[]);
main(){
    int length;
    cout<<"Enter the length of the array: ";
    cin>>length;
    string arr[length];
    cout<<"Enter the elements of the array (\"left\" or \"right\"):"<<endl;
    for(int idx = 0 ; idx < length ; idx++)
    {
        cin>>arr[idx];
    }
    int result=rotations(length,arr);
    cout<<"Number of full rotations: "<<result;
}
int rotations(int length, string arr[])
{
    int result=0;
    int more=0;
    for(int i = 0 ; i < length ; i++)
    {
        if(arr[i]=="right")
        {
            more+=90;
        }
        else if(arr[i]=="left")
        {
            more-=90;
        }
    }
    result=more/360;
    if(result<0)
    { 
        result=-(result);
    }
    return result;
}