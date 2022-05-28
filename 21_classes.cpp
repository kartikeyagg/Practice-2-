#include<iostream>
using namespace std;
class employee{
    private: //private section
        int a,b,c; // this can't be accessed in main funciton by any means
    public:
        int d,e; //this can be accessed in the main function or any other function using the object of the class
        void setdata(int a,int b,int c); //declaration means we can define it anywhere else even out of the class
        void getdata() {//prints the data
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
        }


};
void employee :: setdata(int a1,int b1,int c1){ //we had to use scope resolution operator (::) to use the variable a,b,c of the class employee
    a = a1;
    b= b1;
    c = c1;
}
int main(){
    employee e1;
    e1.d =6;
    e1.e =9;
    e1.setdata(2,38,59);
    e1.getdata();
    


    return 0;
}