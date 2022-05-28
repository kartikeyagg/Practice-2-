#include<iostream> //protected access modifiers
using namespace std;
// what if one wants a private member of base class in derived class? :- 
class base{
    protected:
        int a; // want to use in derived class but keep it private bcz of security
    private:
        int b;

};
//for a protected memeber;
    // one can be derived in following 3 modes:- 
                            //1.public      2.private        3.protected 
    // 1. private member :- not inherited   not inherited   not inherited
    // 2. protected      :- Protected       private         protected   
    // 3. public         :- public          private         protected
class derived:base{ 


};

int main(){
    base b;
    derived d;

    // cout<<b.a; 
    // it cant be run because a is protected member and cant 
    // be accessed directly like private members
    

    return 0;
}