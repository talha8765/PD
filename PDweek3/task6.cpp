#include<iostream>
using namespace std;

main(){
	float size;
	cout<<"Enter the size of the fertilizer bag in pounds: ";
	cin>>size;
	float cost;
	cout<<"Enter the cost of the bag: $";
	cin>>cost;
	float squareFeet;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	cin>>squareFeet;
	float fertilizer;
	fertilizer=cost/size;
	cout<<"Cost of fertilizer per pound: $"<<fertilizer<<endl;;
	float squareFoot;
	squareFoot=cost/squareFeet;
	cout<<"Cost of fertilizing per square foot: $"<<squareFoot<<endl;

}