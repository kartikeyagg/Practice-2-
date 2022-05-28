#include<iostream>
using namespace std;

// float funcaverage(int a , int b){
//     float avg  = (a+b)/2.0;
//     return avg;
// }
// float  funcaverage2(int a, float b){
//      float avg  = (a+b)/2.0;
//      return avg;

//}// instead of making these many function we can use a function template
template<class T1, class T2>
float funcaverage(T1 a , T2 b){
    float avg  = (a+b)/2.0;
    return avg;
}
template <class T> // now with the help of this we can swap 
void swapp(T &a,T &b){//any data type with only one function
    T temp = a;
    a =b;
    b=temp;
}
int main(){
    float t = funcaverage(4.5,5);
    cout<<t<<endl;
    int x = 5, y =3;
    swapp(x,y);
    cout<<x<<endl<<y<<endl;

    return 0;
}