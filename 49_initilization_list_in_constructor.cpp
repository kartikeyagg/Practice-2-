#include<iostream>//initialization lists in constructors

using namespace std;
/*
syntax for intialization list in constructor:
constructor(argunment-list):initialization-section
{
    assignment + other code;
}
class test{
    int a;
    int b;
    public :
        Test(int i, int j):a(i),b(j){construcot rbody}
};
*/
class test{
    int a;
    int b;
    public :
        // test(int i, int j):a(i),b(j){
            // cout<<"constructor executed"<<endl;
            // cout<<"Value of a is "<<a<<endl;
            // cout<<"Value of b is "<<b<<endl;
            // test(int i, int j):a(i),b(j+i){
            // cout<<"constructor executed"<<endl;
            // cout<<"Value of a is "<<a<<endl;
            // cout<<"Value of b is "<<b<<endl;}
            test(int i, int j):a(i),b(j+a){ // this will cause problems as a is declared first (look in private)
            }
            
            
};

int main (){

    test t(23,6);

    return 0;
}