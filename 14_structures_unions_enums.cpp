#include<iostream>

using namespace std;

union money{
    int rice; //declartion of union
    int cash;
    char favchar; // first letter of the car;
};

int main(){
    //union
    union money m1;
    m1.cash = 5000;
    cout<<m1.cash<<endl; // it will return 5000
    m1.favchar = 'h';
    cout<<m1.favchar<<endl; // it will return h
    cout<<m1.cash<<endl; // it will not return 5000 but a garbage value as
    //it is m1.favchar used the memory allocated to store h(favchar) as
    //we are using union 
    //union end
    cout<<"union code ended"<<endl;
    cout<<"enum code started"<<endl;
    enum meal{breakfast,lunch , dinner};
    meal m2  = breakfast;
    cout<<m2<<endl;

    return 0;
}  