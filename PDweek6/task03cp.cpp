#include<iostream>
using namespace std;

string findZodiacSign(int day, string month);
main(){
    int day;
    cout<<"Enter the day of birth: ";
    cin>>day;
    string month;
    cout<<"Enter the month of birth (e.g., January, February): ";
    cin>>month;
    string sign=findZodiacSign(day, month);
    cout<<"Zodiac Sign: "<<sign;

}
string findZodiacSign(int day, string month)
{
    string sign;
    if((month=="March" || month=="April") && ((day>=21 && day<=31)||(day>=1 && day<=19)))
    {return "Aries";}
    if((month=="April" || month=="May") && ((day>=20 && day<=30)||(day>=1 && day<=20)))
    {return "Taurus";}
    if((month=="May" || month=="June") && ((day>=21 && day<=31)||(day>=1 && day<=20)))
    {return "Gemini";}
    if((month=="June" || month=="July") && ((day>=21 && day<=30)||(day>=1 && day<=22)))
    {return "Cancer";}
    if((month=="July" || month=="August") && ((day>=23 && day<=31)||(day>=1 && day<=22)))
    {return "Leo";}
    if((month=="August" || month=="September") && ((day>=23 && day<=31)||(day>=1 && day<=22)))
    {return "Virgo";}
    if((month=="September" || month=="October") && ((day>=23 && day<=30)||(day>=1 && day<=22)))
    {return "Libra";}
    if((month=="October" || month=="November") && ((day>=23 && day<=31)||(day>=1 && day<=21)))
    {return "Scorpio";}
    if((month=="November" || month=="December") && ((day>=22 && day<=30)||(day>=1 && day<=21)))
    {return "Sagittarius";}
    if((month=="December" || month=="January") && ((day>=22 && day<=31)||(day>=1 && day<=19)))
    {return "Capricorn";}
    if((month=="January" || month=="Febuary") && (day>=20 && day<=31)||(day>=1 && day<=18))
    {return "Aquarius";}
    if((month=="February" || month=="March") && ((day>=19 && day<=28)||(day>=1 && day<=20)))
    {return "Pisces";}
    return sign;
 

}
