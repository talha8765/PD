#include<iostream>
using namespace std;

int progress(int arr[],int number);
main(){
    int number;
    cout<<"Enter the number of Saturdays: ";
    cin>>number;
    int arr[number];
    for(int i = 0 ; i<number ; i++)
    {
        cout<<"Enter miles run for Saturday "<<i+1<<": ";
        cin>>arr[i];
    }
    int result=progress(arr,number);
    cout<<"Total progress days: "<<result;
}
int progress(int arr[],int number)
{
    int result=0;
    for(int idx = 0 ; idx < number ; idx++)
    {
        if(arr[idx+1]>arr[idx])
        {
            result++;
        }
    }
    return result-1;
}