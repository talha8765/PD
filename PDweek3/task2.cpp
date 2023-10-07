#include<iostream>
using namespace std;

main(){
	float min;
	cout<<"Number of Minutes: ";
	cin>>min;
	float sec;
	cout<<"Frames per Second: ";
	cin>>sec;
	float ssec;
	ssec=min*60;
	float frame;
	frame=ssec*sec;
	cout<<"Total Number of Frames: "<<frame;





}