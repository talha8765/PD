/*Create a function that takes the length, width, height (in meters) and output unit and returns the volume of a pyramid in the
correct unit*/
#include<iostream>
using namespace std;

float pyramidVolume(float length,float width,float height,string output);
main(){ float length;
    cout<<"Enter the length of the pyramid (in meters): ";
    cin>>length;
    float width;
    cout<<"Enter the width of the pyramid (in meters): ";
    cin>>width;
    float height;
    cout<<"Enter the height of the pyramid (in meters): ";
    cin>>height;
    string output;
    cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin>>output;
    float volume;
    volume=pyramidVolume(length,width,height,output);                                    //Volume is returened from the function
    cout<<"The volume of the pyramid is: " <<to_string(volume)<<" cubic "<<output;     
    
}
float pyramidVolume(float length,float width,float height,string output)
{
     float volume;
     if(output=="meters")
    {
     volume=(length*width*height)/3.0;
     return volume;
     
    }
    if(output=="centimeters")
    {
     volume=(length*width*height)/3.0;
     volume=volume*100.0*100.0*100.0;
     return volume;
    
     }
     if(output=="kilometers")
     {
      volume=(length*width*height)/3.0;
      volume=volume/1000000000.0;
      return volume;
     
     }
     if(output=="millimeters")
     {
       volume=(length*width*height)/3.0;
       volume=volume*1000.0*1000.0*1000.0;
       return volume;
       
     }
     return 0.0;                  //After returning Volume in main(), the program ends
}
