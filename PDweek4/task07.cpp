#include<iostream>
using namespace std;

void flowerShop(int redRose,int whiteRose,int tulip);
main(){
	int redRose;
	cout<<"Red Rose: ";
	cin>>redRose;
	int whiteRose;
	cout<<"White Rose: ";
	cin>>whiteRose;
	int tulip;
	cout<<"Tulips: ";
	cin>>tulip;
	flowerShop(redRose,whiteRose,tulip);
}
void flowerShop(int redRose,int whiteRose,int tulip)
{
	float originalPrice;
	originalPrice=redRose*2.00+whiteRose*4.10+tulip*2.50;
	cout<<"Original Price: $"<<originalPrice<<endl;
	if(originalPrice>200)
	{float discount=originalPrice-((originalPrice*20)/100);
	cout<<"Price after Discount: $"<<discount<<endl;}
	if(originalPrice<200)
	{cout<<"No discount applied.";}
}