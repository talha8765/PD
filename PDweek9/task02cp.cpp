#include<iostream>
using namespace std;

string containsSeven(int numbers[], int size);
main(){
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int numbers[size];
    for(int x = 1 ; x <= size; x++)
    {
        cout<<"Enter Element "<<x<<": ";
        cin>>numbers[x];
    }
    string result=containsSeven(numbers,size);
    cout<<result;
}
string containsSeven(int numbers[], int size)
{
    for (int i = 0; i < size; i++) {
    int number = numbers[i];
    while (number > 0)
    {
      if (number % 10 == 7) 
      {
        return "Boom!";
      }
    number /= 10;
    }
  }
return "there is no 7 in the array";
}
