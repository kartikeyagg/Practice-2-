#include<iostream>
using namespace std;
/* 
Case:1
class b: public A{ // in this the contructor of A will be called first 

};
Case:2
class A:public B,publicC{

};//order of execution b-->c-->a

Case:3
class A:public B,virtual public C{

}; // order of execution c-->b-->a

*/
class Base1{
    int data1;
    public :
        Base1(int i){
            data1 =i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printdatab2(){
            cout<<"the value of data1 is "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public :
        Base2(int i){
            data2 =i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printdatab1(){
            cout<<"the value of data2 is "<<data2<<endl;
        }
};
class derived : public Base1,virtual public Base2{
    int d1,d2;
    public:
        derived(int a , int b, int c,int d): Base1(a),Base2(b){
            d1= c;
            d2 =d;
            cout<<"Derived class constructor called"<<endl;
        }
         void printdatad(){
            cout<<"the value of d1 is "<<d1 <<" and d2 is "<<d2<<endl;
        }
};
int main(){
    derived harry(2,6,8,1);
    harry.printdatab1();
    harry.printdatab2();
    harry.printdatad();
    return 0; 
}