#include<iostream>
using namespace std;
class A{
    int a;
    public:
        A & setdata(int a){
            this->a= a;
            return *this;
        }
        void getdata(){
            cout<<"the value of a is  "<<a<<endl;
        }
}; 
int main(){
    //'this' is a keyword which is a pointer which poits to the object which is being created
    A a;
    a.setdata(4).getdata();//because A type is returned;
    a.getdata();
    return 0;
}