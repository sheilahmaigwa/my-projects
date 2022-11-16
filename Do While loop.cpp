//Do While loop to find numbers between different points

#include<iostream>
using namespace std;

int main()
{

  int n1,n2;
   cout<<"Enter Initial No";
   cin>>n1;
   cout<<"Enter Final No";
   cin>>n2;
 
  do{
    cout<<n1<<" ";
    ++n1;
  }
  while(n1<=n2);
    
  return 0;
}
