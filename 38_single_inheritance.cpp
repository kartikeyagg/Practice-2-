#include<iostream>
using namespace std;

class base{
    int data1;//private by default and not inheritable
    public:
        int data2;
        void setdata();
        int getdata1();
        int getdata2();

};
void base:: setdata(void){
    data1 = 10;
    data2 =20;
}
int base:: getdata1(void){
    return data1;
}
int base:: getdata2(void){
    return data2;
}
class derived:public base{//class is being derived p
    int data3;
    public :
    void process();
    void display();
};
void derived:: process(void){
    data3 = data2*getdata1();

}
void derived:: display(void){
    cout<<"Value of data 1 is "<<getdata1()<<endl;//data1 is not inherited but getdata() function is inherited
    cout<<"Value of data 2 is "<<data2<<endl;
    cout<<"Value of data 3 is "<<data3<<endl;
}
int main(){
    derived der;
    der.setdata(); //using fun of base class from derived class object
    der.process();
    der.display();

    return 0;
}