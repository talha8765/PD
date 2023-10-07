#include<iostream>
using namespace std;

void possibleBonus();
main(){
	possibleBonus();

}
void possibleBonus()
{
	
	int positionA;
	cout<<"Enter your position: ";
	cin>>positionA;
	int positionB;
	cout<<"Enter your friend's position: ";
	cin>>positionB;
	int dice;	
	dice=positionB-positionA;
	if(dice>6)
	{cout<<"false";}
	if(dice<6)
	{cout<<"true";}
}