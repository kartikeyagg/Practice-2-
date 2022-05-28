#include<iostream>//Multiple templates
using namespace std;
template<class T1, class T2> // 2 datatypes used here
class myclass{
    public:
        T1 data1;
        T2 data2;
        myclass(T1 a,T2 b){
            data1 = a;
            data2 = b;
        }

        void display(){
            cout<<this->data1<<endl<<this->data2<<endl;
        }
};

int main(){
    myclass<int ,char> obj(1,'f');
    // obj.data1 = 5;
    // obj.data2 = 't'; // made constructor instead
    obj.display();

    return 0;
}