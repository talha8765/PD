/*Write a program that takes the vehicle type, its price and returns the total price after adding the tax*/
#include<iostream>
using namespace std;

float taxCalculator(char type,float price);
main(){
    char type;
    cout<<"Enter the vehicle type code (M, E, S, V, T): ";
    cin>>type;
    float price;
    cout<<"Enter the price of the vehicle: $";
    cin>>price;
    float finalprice;
    finalprice=taxCalculator(type,price);                         //finalprice is returned from function "taxCalculator"
    cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"+to_string(finalprice)<<".";
}
float taxCalculator(char type,float price)
{
    float taxamount;
    float finalprice;
    if(type=='M')
    {
     taxamount=(price*6.0)/100.0;
     finalprice=price+taxamount;
     return finalprice;
     }
     if(type=='E')
     {
      taxamount=(price*8.0)/100.0;
      finalprice=price+taxamount;
      return finalprice; 
     }
     if(type=='S')
     {
      taxamount=(price*10.0)/100.0;
      finalprice=price+taxamount;
      return finalprice;
     }
     if(type=='V')
     {
      taxamount=(price*12.0)/100.0;
      finalprice=price+taxamount;
      return finalprice;
     }
     if(type=='T')
     {
      taxamount=(price*15.0)/100.0;
      finalprice=price+taxamount;
      return finalprice;
     }
     return 0.0;      //Program terminates after returning finalprice
}