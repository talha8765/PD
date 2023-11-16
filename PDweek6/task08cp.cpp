#include<iostream>
#include<cmath>
using namespace std;

int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
main(){
    string yearType;
    cout<<"Enter year type: ";
    cin>>yearType;
    int holidays;
    cout<<"Enter number of holidays: ";
    cin>>holidays;
    int hometownWeekends;
    cout<<"Enter number of weekends: ";
    cin>>hometownWeekends;
    int result = calculateVolleyballGames(yearType,holidays,hometownWeekends);
    cout<<result;
}
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    float result;
    if(yearType=="normal")
    {
        result=(0.75*48)+(0.6666666667*holidays);
    }
    else if(yearType=="leap")
    {
        result=(0.75*48)+(0.6666666667*holidays)+5;
    }
    return ceil(result);
}
