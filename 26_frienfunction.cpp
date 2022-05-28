#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
        void setnumber(int n1,int n2){
            a = n1;
            b = n2;

        }
        friend Complex sumcomplex(Complex o1, Complex o2); // declaring a friend function without this dec the function sumComplex can't access 
        // the data of this class by just taking params of the object of the same
        void printnumber(){
            cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
Complex sumcomplex(Complex o1, Complex o2){
    Complex o3;  // could not access the private data of a class directly
    o3.setnumber((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}
int main(){
    Complex c1,c2,sum;
    c1.setnumber(1,5);
    c2.setnumber(5,7);
    c1.printnumber();
    c2.printnumber();
    sum  = sumcomplex(c1,c2);
    sum.printnumber();

    return 0;
    
}