#include<iostream>
using namespace std;

main(){
	int digit;
	cout<<"Enter a 4-digit number: ";
	cin>>digit;
	float sum;
	sum=(digit%10);
	int digit1;
	digit1=digit/10;
	int sum1;
	float eva1;
	eva1=(digit1%10);
	int digit2;
	digit2=digit1/10;
	float eva2;
	eva2=(digit2%10);
	int digit3;
	digit3=digit2/10;
	float eva3;
	eva3=(digit3%10);
	int digit4;
	digit4=digit3/10;
	float eva4;
	eva4=(digit4%10);
	float final;
	final=sum+eva1+eva2+eva3+eva4;

	cout<<"Sum of the individual digits: "<<final;
}