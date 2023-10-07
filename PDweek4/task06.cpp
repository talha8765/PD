#include<iostream>
using namespace std;

void longestTime(int hours,int minutes);
main(){
	int hours;
	cout<<"Enter the number of hours: ";
	cin>>hours;
	int minutes;
	cout<<"Enter the number of minutes: ";
	cin>>minutes;
	longestTime(hours,minutes);
}
void longestTime(int hours,int minutes)
{

	int hour;
	hour=hours*60;
	
	if(hour>minutes)
	{cout<<hours;}
	if(minutes>hour)
	{cout<<minutes;}
}