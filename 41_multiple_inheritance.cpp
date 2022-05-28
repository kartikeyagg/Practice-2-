#include<iostream> //multiple inheritance
using namespace std;

class base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int = a;
        }

};
class base2{
    protected:
        int base2int;
    public:
        void set_base2int(int a){
            base2int = a;
        }

};
// syntax :- class derived: visibility-mode base1, visibility-mode base2

class derived: public base1, public base2{
    public:
        void show(){
            cout<<"the value of base1 is "<<base1int<<endl;
            cout<<"the value of base2 is "<<base2int<<endl;
            cout<<"the value of sum of base1 and base2 is "<<base1int+base2int<<endl;
        }
};

int main(){

    // derived d1;
    // d1.set_base1int(21); //member fun of 1 base class
    // d1.set_base2int(31); // member fun of 2nd base class
    // d1.show();

    return 0;
}