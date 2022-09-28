//code fo calculating net salary
#include <iostream>

using namespace std;

int main()
{
    int salary, bonus;
     int service;
    cout<<"kindly enter salary of employee"<<endl;
    cin>> salary;
    cout<< "kindly years of service"<<endl;
    cin>>service;
    if (service>10)
 bonus=salary*10/100;
   else if (service>=6&service<=10)
  {
 bonus=salary*8/100;
  }
 else if (service<6)
 {
   bonus=salary*5/100;
   }
  salary= salary+bonus;
 cout<<"dear employee your net salary is:  "<<salary;
    return 0;
}
