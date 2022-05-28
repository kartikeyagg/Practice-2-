#include<iostream>
#include<string>

using namespace std;
class complex{
    int a ; //real value
    int b; // img value
    public:
        void setdata(int v1, int v2)
        { a = v1;
        b = v2;
        }

        void setDatabysum(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void printdata(){
            cout<<"Your complex number is "<<a<<" +"<<b<<"i"<<endl;

        }
};

int main(){
    complex c1,c2,c3;
    c1.setdata(1,2);
    c1.printdata();

    c2.setdata(3,4);
    c2.printdata();

    c3.setDatabysum(c1,c2); // this function is getting the objecto of other classes as parameter
    c3.printdata();

    return 0;
}