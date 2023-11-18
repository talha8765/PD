#include<iostream>
using namespace std;

bool arrange(int length, int arr[]);
main(){
    int length;
    cout<<"Enter the length of the array: ";
    cin>>length;
    int arr[length];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i = 0 ; i < length ; i++)
    {
        cin>>arr[i];
    }
    bool result=arrange(length,arr);
    cout<<"Can be arranged: "<<result;
}
bool arrange(int length, int arr[])
{
    bool result;
    for(int i = 0 ; i<length ; i++)
    {
        for(int j = 0 ; j<length-1 ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tres = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = tres;
            }
        }
    }
    for(int x = 0 ; x < length-1 ; x++)
    {
        if(arr[x]+1!=arr[x+1])
        {return false;}
    }
     
        return true;
}

