#include<iostream>
// what should be done when there are two function with same name
// in 2 diff base class in multiple inheritence
using namespace std;
class base1{
    public:
        void greet(){
            cout<<"how are you"<<endl;
        }
};
class base2{
    public:
        void greet(){
            cout<<"Kaise ho"<<endl;
        }
};
class derived: public base1 , public base2{
    int a;
    public:
        void greet(){
            base1::greet();
        }

};
int main(){
    base1 b1;
    base2 b2;
    b1.greet();
    b2.greet();
    derived d1;
    d1.greet();
    
    return 0;
}