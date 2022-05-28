#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    //creating a constructor  
    complex (int , int); // constructor declaration
    
    void printnumber(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
     }
};

complex :: complex(int x = 0,int y=0){// --> this is a parameterized constructor as it takes no argunements

    a = x;
    b =y;
}
int main(){
    //implict call;
    complex c1(4,6);
    c1.printnumber();

    return 0;
}