#include<iostream>
using namespace std;

main(){
	float initialVelocity;
	cout<<"Enter Initial Velocity (m/s): ";
	cin>>initialVelocity;
	float acceleration;
	cout<<"Enter Acceleration (m/s^2): ";
	cin>>acceleration;
	float time;
	cout<<"Enter Time (s): ";
	cin>>time;
	float finalVelocity;
	finalVelocity=(acceleration*time)+initialVelocity;
	cout<<"Final Velocity (m/s): "<<finalVelocity;
	
}