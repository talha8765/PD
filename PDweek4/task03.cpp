#include<iostream>
using namespace std;


main(){
  
	string name;
	cout<<"Enter the country's name: ";
	cin>>name;
	float ticket;
	cout<<"Enter the ticket price in dollars: $";
	cin>>ticket;
	if(name=="Pakistan")
	{float discount;
	discount=ticket-((ticket*5)/100);
	cout<<"Final ticket price after discount: $"<<discount<<endl;}

	if(name=="Ireland")
	{float discount;
	discount=ticket-((ticket*10)/100);
	cout<<"Final ticket price after discount: $"<<discount<<endl;}

	if(name=="India")
	{float discount;
	discount=ticket-((ticket*20)/100);
	cout<<"Final ticket price after discount: $"<<discount<<endl;}

	if(name=="England")
	{float discount;
	discount=ticket-((ticket*30)/100);
	cout<<"Final ticket price after discount: $"<<discount<<endl;}

	if(name=="Canada")
	{float discount;
	discount=ticket-((ticket*45)/100);
	cout<<"Final ticket price after discount: $"<<discount<<endl;}
        
}
	
	
	
	
	