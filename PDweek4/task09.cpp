#include<iostream>
using namespace std;

void tpChecker(int people,int tissuePaper);
main(){
	int people;
	cout<<"Number of people in the household: ";
	cin>>people;
	int tissuePaper;
	cout<<"Number of rolls of TP: ";
	cin>>tissuePaper;
	tpChecker(people,tissuePaper);
}
void tpChecker(int people,int tissuePaper)
{
	int rolls;
	rolls=tissuePaper*500;
	int perDay;
	perDay=people*57;
	int days;
	days=(tissuePaper*500)/(people*57);
	if(days<14)
	{cout<<"Your TP will only last "<<days<<" days, buy more!";}
	if(days>14)
	{cout<<"Your TP will last "<<days<<" days, no need to panic!";}
}




