//program to check voter eligibility
#include <iostream>

using namespace std;

int main()
{
 int age;
 cout <<"enter your age"<< endl;
 cin>>age;
 if(age>=18)
 {
    cout<<"You are eligilble to vote"<<endl;
 }
else
 {
    cout<<"not elibible"<<endl;
 }
return 0;
}
