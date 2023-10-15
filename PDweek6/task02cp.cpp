#include<iostream>
using namespace std;

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float percentage);
main(){
    string name;
    cout<<"Enter student name: ";
    cin>>name;
    float marksEnglish;
    cout<<"Enter marks for English: ";
    cin>>marksEnglish;
    float marksMaths;
    cout<<"Enter marks for Maths: ";
    cin>>marksMaths;
    float marksChemistry;
    cout<<"Enter marks for Chemistry: ";
    cin>>marksChemistry;
    float marksSocialScience;
    cout<<"Enter marks for Social Science: ";
    cin>>marksSocialScience;
    float marksBiology;
    cout<<"Enter marks for Biology: ";
    cin>>marksBiology;
    cout<<"Student Name: "<<name<<endl;
    float percentage=calculateAverage(  marksEnglish,  marksMaths,  marksChemistry, marksSocialScience,  marksBiology);
    cout<<"Percentage: "<<percentage<<"%"<<endl;
    string grade=calculateGrade(percentage);
    cout<<"Grade: "<<grade;

}
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{
    float ObtainedMarks;
    ObtainedMarks=marksEnglish+marksMaths+marksChemistry+marksSocialScience+marksBiology;
    float percentage;
    percentage=(ObtainedMarks/5.0);  
    return percentage;

}
string calculateGrade(float percentage)
{
    string grade;
    if(percentage>=90.0 && percentage<=100.0)
    {return "A+";}
    if(percentage>=80.0 && percentage<90.0)
    {return "A";}
    if(percentage>=70.0 && percentage<80.0)
    {return "B+";}
    if(percentage>=60.0 && percentage<70.0)
    {return "B";}
    if(percentage>=50.0 && percentage<60.0)
    {return "C";}
    if(percentage>=40.0 && percentage<50.0)
    {return "D";}
    if(percentage<40.0)
    {return "F";}
    return grade;
}
