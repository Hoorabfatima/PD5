#include<iostream>
#include<iomanip>
 using namespace std;
 float volumePyramid(float,float,float,string);
 main()
{
  float length, width, height;
  float volume;
  string unit;
  cout<<"Enter the length of the pyramid (in meters): ";
  cin>>length;
  cout<<"Enter the width of the pyramid (in meters): ";
  cin>>width;
  cout<<"Enter the height of the pyramid (in meters): ";
  cin>>height;
  cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
  cin>>unit;
  volume=volumePyramid(length,width,height,unit);
  cout<<fixed<<setprecision(3)<<"The volume of pyramid is: "<<volume<<" cubic "<<unit;
}
 float volumePyramid(float length, float width, float height, string unit)
{
  float vol;
  if(unit=="millimeters"||unit=="Millimeters")
   vol=((length*width*height)/3)*1000*1000*1000;
  
  else if(unit=="centimeters"||unit=="Centimeters")
   vol=((length*width*height)/3)*100*100*100;
  
  else if(unit=="meters"||unit=="Meters")
   vol=(length*width*height)/3;
  
  else if(unit=="kilometers"||unit=="Kilometers")
   vol=((length*width*height)/3)/1000/1000/1000;
  else
   cout<<"invalid unit";
 return vol;
}
  
  
 
