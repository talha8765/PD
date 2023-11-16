#include<iostream>
using namespace std;

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);
main(){
    int examHour;
    cout<<"Enter Exam Starting Time (hour): ";
    cin>>examHour;
    int examMinute;
    cout<<"Enter Exam Starting Time (minutes): ";
    cin>>examMinute;
    int studentHour;
    cout<<"Enter Student hour of arrival: ";
    cin>>studentHour;
    int studentMinute;
    cout<<"Enter Student minutes of arrival: ";
    cin>>studentMinute;

    string time=checkStudentStatus(examHour, examMinute, studentHour, studentMinute);
    cout<<time;
   
}
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{
    string time;
    examHour=examHour*60;
    studentHour=studentHour*60;
    int examTotal=examHour+examMinute;
    int studentTotal=studentHour+studentMinute;
    int difference=examTotal-studentTotal;
    int difference1=difference/60;
    if(difference==0)
    {time="On time";}
    else if(difference>0 && difference<=30)
    {time="On time\n"+to_string(difference%60)+" minutes before the start";}
    else if(difference>30 && difference1==0)
    {time="Early\n"+to_string(difference%60)+" minutes before the start";}
    else if(difference>30 && difference1!=0)
    {time="Early\n"+to_string(difference/60)+":"+to_string(difference%60)+" hours before the start";}
    else if(difference<0 && difference1==0)
    {time="Late\n"+to_string(-(difference%60))+" minutes after the start";}
    else if(difference<0 && difference1!=0)
    {time="Late\n"+to_string(-(difference/60))+":"+to_string(-(difference%60))+" hours after the start";}

    return time;

}
