#include<iostream>
using namespace std;
//copy contructor programe

class number{
    int a;
    public:
        number(){
            a = 0;
       }
        number(int num){
            a = num;
        }
        // when no copy constructor is found, compiler supplies its own copy constructors
        number(number &obj){
            cout<<"copy contructor call"<<endl;
            a = obj.a;
        }
        void display(){
            cout<<"The number for this project is "<<a<<endl;
        }
};
int main(){
    number x,y,z(45);
    x.display();
    y.display();
    z.display();
    number z1(x); // intializing z1 with an object to be copied
    // or can be invoked by 'number z1 = x;'
    //z1 should exactly resemble x (we can use copy contructor)
    z1.display();

    return 0;
}