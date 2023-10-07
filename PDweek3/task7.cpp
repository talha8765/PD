#include<iostream>
using namespace std;

main(){
	string movie;
	cout<<"Enter the movie name: ";
	cin>>movie;
	float adultTicket;
	cout<<"Enter the adult ticket price: $";
	cin>>adultTicket;
	float childTicket;
	cout<<"Enter the child ticket price: $";
	cin>>childTicket;
	float adultSold;
	cout<<"Enter the number of adult tickets sold: ";
	cin>>adultSold;
	float childSold;
	cout<<"Enter the number of child tickets sold: ";
	cin>>childSold;
	float percentage;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	cin>>percentage;
	cout<<endl;
	cout<<"Movie: "<<movie<<endl;
	float totalAmount;
	totalAmount=(adultTicket*adultSold)+(childTicket*childSold);
	cout<<"Total amount generated from ticket sales: $"<<totalAmount<<endl;
	float donation;
	donation=(totalAmount*10)/100;
	cout<<"Donation to charity (10%): $"<<donation<<endl;
	float remainingAmount;
	remainingAmount=totalAmount-donation;
	cout<<"Remaining amount after donation: $"<<remainingAmount<<endl;
	
}