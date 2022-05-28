#include<iostream>
using namespace std;
template <class T>
class harry{
    public :
        T data;
        harry(T a){
            data =a;
        }
        void display();
        // void display(){ // delclared below
        //     cout<<data<<endl;
        // }

};
template <class T>
void harry<T>::display(){
            cout<<data<<endl;
        }

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}

// templatized fun
template <class T>         
void func(T a){
    cout<<"I am templatized func() "<<a<<endl;
}
// now which funct must be called if called in the main? 
int main(){
    harry<char> h('p');
    cout<<h.data<<endl;
    h.display();
    func(5);

    return 0;
}