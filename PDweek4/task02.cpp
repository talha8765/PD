#include<iostream>
using namespace std;

void reverse(string condition);
main(){
	string condition;
	cout<<"Enter 'true' or 'false': ";
	cin>>condition;
	reverse(condition);
}
void reverse(string condition)
{
	if(condition=="true")
	{cout<<"false";}
	if(condition=="false")
	{cout<<"true";}
}