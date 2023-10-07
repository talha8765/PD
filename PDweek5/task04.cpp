/*Write a program that inputs needed hours, days, and number of days and returns total time*/
#include<iostream>
using namespace std;

string projectTimeCalculation(int hours,int days,int workers);
main(){
    int hours;
    cout<<"Enter the needed hours: ";
    cin>>hours;
    int days;
    cout<<"Enter the days that the firm has: ";
    cin>>days;
    int workers;
    cout<<"Enter the number of all workers: ";
    cin>>workers;
    string answer=projectTimeCalculation(hours,days,workers);           //string answer is returned from function
    cout<<answer;

}
string projectTimeCalculation(int hours,int days,int workers)
{
    float percent;
    string answer;
    percent=days-((days*10.0)/100.0);
    float totalhours;
    totalhours=workers*10*percent;
    if(totalhours>hours){
        int extraTime=totalhours-hours;
        answer="Yes!"+to_string(extraTime)+" hours left.";
    }
    if(totalhours<hours){
        int neededTime=hours-totalhours;
        answer="Not enough time! "+to_string(neededTime)+" hours needed.";
    }
    return answer;
}