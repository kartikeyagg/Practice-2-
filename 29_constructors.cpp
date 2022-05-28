#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    //creating a constructor  
    complex (void); // constructor declaration  
    void printnumber(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
     }
};
complex :: complex(void){// --> this is a default constructor as it accepts no argunements

    a = 10;
    b =1;}
    
int main(){
    complex c1;
    c1.printnumber(); // so here we didn't need to use a function such as setnumber to
    // intialize a and b as it is been done in contructor
    //every time a new object is made the contructor is automatically invoked

    return 0;
}
