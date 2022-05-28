#include<iostream>
using namespace std;
class Y; // have to declare Y beforehand as class X is using Y
// we can define Y later on 
// this is similar to function declaration
class X{
    int data;
    friend void add(X , Y );
    public:
        void setvalue(int value){
            data = value;
        }
};
class Y{
    int num;
    friend void add(X , Y );

    public:
        void setvalue(int value){
            num = value;
        }
};
void add(X o1, Y o2){
    cout<<"suming the data of X and Y objects gives me "<<(o1.data)+o2.num<<endl;
}

int main(){
    X o1;
    o1.setvalue(34);
    Y o2;
    o2.setvalue(243);
    add(o1,o2);
    return 0;
}