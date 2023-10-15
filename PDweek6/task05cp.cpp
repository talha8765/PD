#include<iostream>
using namespace std;

float calculateFruitPrice(string fruit, string dayOfWeek, double quantity);
main(){
    string fruit;
    cout<<"Enter the fruit name: ";
    cin>>fruit;
    string dayOfWeek;
    cout<<"Enter the day of the week (e.g., Monday, Sunday): ";
    cin>>dayOfWeek;
    double quantity;
    cout<<"Enter the quantity: ";
    cin>>quantity;
    float price=calculateFruitPrice(fruit,dayOfWeek,quantity);
    if(price>0){
    cout<<price;}
    if(price<0){
    cout<<"error";
    }
}    
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
{
    float price;
    if(fruit=="banana" && (dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday"))
    {price=quantity*2.50;}
    else if(fruit=="apple" && (dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday"))
    {price=quantity*1.20;}
    else if(fruit=="orange" && (dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday"))
    {price=quantity*0.85;}
    else if(fruit=="grapefruit" && (dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday"))
    {price=quantity*1.45;}
    else if(fruit=="kiwi" && (dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday"))
    {price=quantity*2.70;}
    else if(fruit=="pineapple" && (dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday"))
    {price=quantity*5.50;}
    else if(fruit=="grapes" && (dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday"))
    {price=quantity*3.85;}
    else if(fruit=="banana" && (dayOfWeek=="Saturday"||dayOfWeek=="Sunday"))
    {price=quantity*2.70;}
    else if(fruit=="apple" && (dayOfWeek=="Saturday"||dayOfWeek=="Sunday"))
    {price=quantity*1.25;}
    else if(fruit=="orange" && (dayOfWeek=="Saturday"||dayOfWeek=="Sunday"))
    {price=quantity*0.90;}
    else if(fruit=="grapefruit" && (dayOfWeek=="Saturday"||dayOfWeek=="Sunday"))
    {price=quantity*1.60;}
    else if(fruit=="kiwi" && (dayOfWeek=="Saturday"||dayOfWeek=="Sunday"))
    {price=quantity*3.00;}
    else if(fruit=="pineapple" && (dayOfWeek=="Saturday"||dayOfWeek=="Sunday"))
    {price=quantity*5.60;}
    else if(fruit=="grapes" && (dayOfWeek=="Saturday"||dayOfWeek=="Sunday"))
    {price=quantity*4.20;}
    else
    {return -1;}
    return price;
}
