#include<iostream>
using namespace std;

int special(int length, int arr[]);
main(){
    int length;
    cout<<"Enter the length of the array: ";
    cin>>length;
    int arr[length];
    cout<<"Enter the elements of the array:"<<endl;
    for(int idx = 0 ; idx < length ; idx++)
    {
        cin>>arr[idx];
    }
    int result=special(length,arr);
    cout<<"Special value: "<<result;
}
int special(int length, int arr[])
{
    for(int i = 0 ; i <= length ; i++)
    {int count=0;
        for(int j = 0 ; j < length-1 ; j++)
        {
            if(i<=arr[j])
            {
                count++;
            }
        }
        if(i==count)
        {
            return count+1;
        }
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
    }
    return -1;
}

