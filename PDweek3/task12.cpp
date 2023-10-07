#include<iostream>
using namespace std;

main(){
	float squareMeters;
	cout<<"Number of square meters you can paint: ";
	cin>>squareMeters;
	float width;
	cout<<"Width of the single wall (in meters): ";
	cin>>width;
	float height;
	cout<<"Height of the single wall (in meters): ";
	cin>>height;
	float result;
	result=(squareMeters)/(width*height);
	cout<<"Number of walls you can paint: "<<result;

}