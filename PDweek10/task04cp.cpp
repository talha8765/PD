#include<iostream>
using namespace std;

int volume(int number, int arr[]);

main(){
    int numBox;
    cout<<"Enter the number of boxes: ";
    cin>>numBox;
    int number=numBox*3;
    int arr[numBox*3];
    cout<<"Enter the dimensions of the boxes (length, width, height):"<<endl;
    for(int i = 0 ; i < number ; i++)
    {
        cin>>arr[i];
    }
    int result=volume(number,arr);
    cout<<"Total volume of all boxes: "<<result;
}
int volume(int number, int arr[])
{
    int finalVol=0;
    for(int i=0;i<number;i+=3)
    {
        int volume=arr[i]*arr[i+1]*arr[i+2];
        finalVol+=volume;
    }
    return finalVol;
}
