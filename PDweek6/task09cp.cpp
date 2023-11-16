#include<iostream>
using namespace std;

string checkPointPosition(int h, int x, int y);
main(){
    int h;
    cout<<"Enter height: ";
    cin>>h;
    int x;
    cout<<"Enter x coordinate: ";
    cin>>x;
    int y;
    cout<<"Enter y coordinate: ";
    cin>>y;
    string result=checkPointPosition(h,x,y);
    cout<<result;
}
string checkPointPosition(int h, int x, int y)
{
    string result;
    if( x<h && y<h )
    {
        return "Inside";
    }
    else if( x>h && x<2*h && y<3*h)
    {
        return "Inside";
    }
    else if( x>2*h && x<3*h && y<h)
    {
        return "Inside";
    }
    else if( x<=h && y<=h)
    {
        return "Border";
    }
    else if( x>=h && x<=2*h && y<=3*h)
    {
        return "Border";
    }
    else if( x>=2*h && x<=3*h && y<=h)
    {
        return "Border";
    }
    else
    {
        return "Outside";
    }
    return " ";

}
