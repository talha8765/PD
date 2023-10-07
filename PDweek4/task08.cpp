#include<iostream>
using namespace std;

void pet(int holidays);
main(){
	int holidays;
	cout<<"Holidays: ";
	cin>>holidays;
	pet(holidays);
}
void pet(int holidays)
{
	int workdays;
	workdays=365-holidays;
	int gameTime;
	gameTime=(workdays*63+holidays*127);
	int difference;
	difference=30000-gameTime;

	if(difference>0)
	{int hours=difference/60;
	float minutes=difference-((difference/60)*60);
	cout<<"Tom sleeps well"<<endl;
	cout<<hours<<" hours and "<<minutes<<" minutes less for play";}

	if(difference<0)
	{int hours=-1*difference/60;
	float minutes=-1*difference-((-1*difference/60)*60);
	cout<<"Tom will run away"<<endl;
	cout<<hours<<" hours and "<<minutes<<" minutes for play";}
}

	



