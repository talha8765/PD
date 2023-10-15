#include<iostream>
using namespace std;

string calculateStudioPrices(string month, int numberOfStays);
string calculateApartmentPrices(string month,int numberOfStays);
main(){
    string month;
    cout<<"Enter the month (May, June, July, August, September, October): ";
    cin>>month;
    int numberOfStays;
    cout<<"Enter the number of stays: ";
    cin>>numberOfStays;
    string priceApartment=calculateApartmentPrices(month,numberOfStays);
    cout<<"Apartment: "<<priceApartment<<"$.\n";
    string priceStudio=calculateStudioPrices(month,numberOfStays);
    cout<<"Studio: "<<priceStudio<<"$.";

}
string calculateStudioPrices(string month, int numberOfStays)
{
    float studio;
    float priceStudio; 
    if((numberOfStays>7 && numberOfStays<=14) && (month=="May" || month=="October"))
    {   studio=50.0*numberOfStays;
        priceStudio=studio-(studio*0.05);}
    if(numberOfStays<=14 && (month=="May" || month=="October"))
    {   priceStudio=50.0*numberOfStays;}
    if(numberOfStays>14 && (month=="October" || month=="May"))
    {   studio=50.0*numberOfStays;
        priceStudio=studio-(studio*0.3);}
    if(numberOfStays>14 && (month=="June" || month=="September"))
    {   studio=75.20*numberOfStays;
        priceStudio=studio-(studio*0.2);}
    if(numberOfStays<=14 && (month=="June" || month=="September"))
    {   priceStudio=75.20*numberOfStays;}
    if(numberOfStays<=14 && (month=="July" || month=="August"))
    {
        priceStudio=76.0*numberOfStays;
    }
    
    return to_string(priceStudio);
}
string calculateApartmentPrices(string month, int numberOfStays)
{
    float apartment;
    float priceApartment;
    if(numberOfStays<=14 && (month=="May" || month=="October"))
    {
        priceApartment=65.0*numberOfStays;
    }
    if(numberOfStays>14 && (month=="May"|| month=="October"))
    {
        apartment=65.0*numberOfStays;
        priceApartment=apartment-(apartment*0.1);

    }
    if(numberOfStays<=14 && (month=="June" || month=="September"))
    {
        priceApartment=68.70*numberOfStays;
    }
    else if(numberOfStays>14 && (month=="June"||month=="September"))
    {
        apartment=68.70*numberOfStays;
        priceApartment=apartment-(apartment*0.1);

    }
    if(numberOfStays<=14 && (month=="July" || month=="August"))
    {
        priceApartment=77.0*numberOfStays;
    }
    if(numberOfStays>14 && (month=="July"||month=="August"))
    {
        apartment=77.0*numberOfStays;
        priceApartment=apartment-(apartment*0.1);

    }

    return to_string(priceApartment);
}
