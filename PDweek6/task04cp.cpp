#include<iostream>
using namespace std;

float amount(char serviceCode, int minutes,char time);
string services(char serviceCode);
int usedMinutes(int minutes);
main(){
    char serviceCode;
    char time;
    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>>serviceCode;
    if(serviceCode == 'P' || serviceCode == 'p')
    { 
      cout<<"Enter time of the call (D/d for day, N/n for night): ";
      cin>>time;
    }
    int minutes;
    cout<<"Enter the number of minutes used: ";
    cin>>minutes;
    string type=services(serviceCode);
    cout<<"Service Type: "<<type<<endl;
    int used=usedMinutes(minutes);
    cout<<"Total Minutes Used: "<<used<<" minutes"<<endl;
    float result=amount(serviceCode,minutes,time);
    cout<<"Amount Due: $"<<result;

}
string services(char serviceCode)
{
     string type;
    if((serviceCode == 'P' || serviceCode == 'p') )
    {type="Premium";}
    if((serviceCode == 'R' || serviceCode == 'r') )
    {type="Regular";}
    return type;

}
int usedMinutes(int minutes)
{
    int used;
    used=minutes;
    return used;
}
   
float amount(char serviceCode, int minutes,char time)
{
   
    float result;
    if((serviceCode == 'R' || serviceCode == 'r') && minutes<=50.0)
    {result=10.0;}
    if((serviceCode == 'R' || serviceCode == 'r') && minutes>50.0)
    {result=minutes*0.20;}
    if(((serviceCode == 'P' || serviceCode == 'p') && (time=='D'||time=='d') && minutes<=75))
    {result=25.0;}
    if(((serviceCode == 'P' || serviceCode == 'p') && (time=='D'||time=='d') && minutes>75))
    {result=minutes*0.10;}
    if(((serviceCode == 'P' || serviceCode == 'p') && (time=='N'||time=='n') && minutes<=100))
    {result=25.0;}
    if(((serviceCode == 'P' || serviceCode == 'p') && (time=='N'||time=='n') && minutes>100))
    {result=minutes*0.05;}
    return result;


    
}
