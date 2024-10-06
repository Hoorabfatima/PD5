#include<iostream>
 using namespace std;
 float taxCalculator(char, float);
 main()
{
 float price, finalPrice;
 char type;
 cout<<"Enter the vehicle type code (M, E, S, V, T): ";
 cin>>type;
 cout<<"Enter the price of the vehicle: $";
 cin>>price;
 finalPrice=taxCalculator(type, price);
 cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<finalPrice;
}
 float taxCalculator(char type, float price)
{
 float tax, total;
 if(type=='M'||type=='m')
 tax=price*6/100;
 else if(type=='E'||type=='e')
 tax=price*8/100;
 else if(type=='S'||type=='s')
 tax=price*10/100;
 else if(type=='V'||type=='v')
 tax=price*12/100;
 else if(type=='T'||type=='t')
 tax=price*15/100;
 else
 cout<<"invalid input";
 total=price+tax;
 return total;
}
 
 
 