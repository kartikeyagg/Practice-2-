#include<iostream>
using namespace std;
template<class T1=int,class T2=float>
class kartikey{
    public:
        T1 a;
        T2 b;
    kartikey(T1 x , T2 y){
        a=x;
        b =y;
    }
    void display(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};
int main(){
    kartikey <> k(4,3.6); // it is not necessary now to specify datatype here as we already
    k.display();//declared it above(like funcitons if now argunment is given then the default argunments will be considered)
    return 0;
}