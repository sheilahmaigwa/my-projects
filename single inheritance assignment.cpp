//single inheritance program
#include<iostream>
using namespace std;
class king{
    public:
    void land (){
        cout<<"I have a land"<<endl;
    }
    void car(){
        cout<<"I own car"<<endl;
    }
};
class prince: public king{
    public:
    void son(){
        cout<<"I have two sons!"<<endl;
    }
};
int main(){
    prince queen;
queen.land();
queen.car();
queen.son();
return 0;
}