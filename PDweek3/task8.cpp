#include<iostream>
using namespace std;

main(){
	float vegetable;
	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>>vegetable;
	float fruit;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>>fruit;
	float totalVegetable;
	cout<<"Enter total kilograms of vegetables: ";
	cin>>totalVegetable;
	float totalFruit;
	cout<<"Enter total kilograms of fruits: ";
	cin>>totalFruit;
	float coins;
	coins=(vegetable*totalVegetable)+(fruit*totalFruit);
	float rupees;
	rupees=coins/1.94;
	cout<<"Total earnings in Rupees (Rps): "<<rupees;
}