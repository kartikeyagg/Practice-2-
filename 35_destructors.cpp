#include<iostream> //destructors ; it is used to free the memory of a class object after its use like free function in malloc
using namespace std;
//destructors never takes an argunment nor does it return any value
class num{
    
    public:
        static int count;
        num(){
            count ++;
            cout<<"The object number is "<<count<<endl;
        }
        ~num(){
            cout<<"Destructor called"<<endl;
            count--;
        }
};
int num::count =0;
int main(){
    cout<<"Inside main"<<endl;
    cout<<"Creating first object n1"<<endl;
    num  n1;
    {
        cout<<"creating two more objects"<<endl;
        num n3,n2;
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to main"<<endl;

//destructor is automatically called at the end of programe;
    return 0;
}