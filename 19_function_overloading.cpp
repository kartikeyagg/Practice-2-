#include<iostream>
using namespace std;
int add(int a , int b){
    cout<<"using function with 2 argunments "<<endl;
    return a+b;
}
int add(int a , int b,int c){
    cout<<"using function with 3 argunments "<<endl;

    return a+b+c;
}
float volume(double r,int h){
    return ( 3.14*r*r*h);
}
int main (){

    cout<<"the sum of 3 and  6 is "<<add(3,6);
    cout<<"\nthe sum of 3 6 and 7 is "<<add(3,6,7)<<endl;
    return 0;
}