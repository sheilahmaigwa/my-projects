//Program to convert Temp in fahrenheit to celsius 
#include<iostream>
using namespace std;
float temp (int f);
float celcius;
int main()
{
 int fahrenheit;
 cout<<"Enter temp in fahrenheit"<<endl;
 cin>>fahrenheit;
 celcius=temp(fahrenheit);
 //function calling
 cout<<"Temp in celcius is :"<<celcius<<endl;
 return 0;
}
float temp(int f)
{
	// function definition
	float celcius;
	celcius =0.556*(f-32);
	return celcius;
} 