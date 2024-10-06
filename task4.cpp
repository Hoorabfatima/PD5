#include<iostream>
 using namespace std;
 int projectTimeCalculation(int, int, int);
 main()
{
  int neededhours, days, workers, result;
  cout<<"Enter the needed hours: ";
  cin>>neededhours;
  cout<<"Enter the days that the firm has: ";
  cin>>days;
  cout<<"Enter the number of workers: ";
  cin>>workers;
  result=projectTimeCalculation(neededhours, days, workers);
  if (result>neededhours);
   cout<<"Not enough time! "<<result-neededhours<<" hours needed.";
  if(result<neededhours)
   cout<<"Yes!"<<result-neededhours<<" hours needed.";
}
 int projectTimeCalculation(int neededhours, int days, int workers)
{ 
 int final;
 final=days*9*workers;
 return final;
}
 
 
 
  
  
 