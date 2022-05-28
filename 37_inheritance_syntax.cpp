#include<iostream>
using namespace std;
//base class
class employee{
public:
    float salary;
    int id;
    employee(){};
    employee(int emid){
        id  = emid;
        salary = 34;
    }
};
//derived class
class programmer : public employee{
    public:
    int languagecode;
    programmer(int a=0){
        id =a;
        languagecode = 9;
    } 
};
int main(){ 
    employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer p1(25);
    cout<<p1.languagecode<<endl;
    cout<<"Id is "<<p1.id<<endl;
    return 0;
}