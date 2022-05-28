#include<iostream>
using namespace std;
class Complex{
    int real , imagnary;
    public :
        void getdata(){
            cout<<"The real part is "<< real <<endl;
            cout<<"The img part is "<< imagnary <<endl;
        }
        void setdata(int a , int b){
            real = a;
            imagnary =b;
        }
};
int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    // or
    Complex *ptr = new Complex;
    ptr->setdata(23,45);
    ptr->getdata();
    Complex *ptr1 = new Complex[3];
    ptr1->setdata(69,74);
    ptr1->getdata();    
    ptr1 = ptr1+1; // now points to 2nd element (object)
    ptr1->setdata(43,87);
    ptr1->getdata();    
    return 0;
}