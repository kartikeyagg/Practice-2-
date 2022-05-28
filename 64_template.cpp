#include<iostream>//templates
using namespace std;
template <class T>// we have declared a variable (which is a datatype)
class vector{    
    public:
    T *arr;
    int size;
        vector(int m){
            size = m;
            arr = new T[size];
        }
        T dotproduct(vector& v){
            T d =0;
            for (int i = 0; i < size; i++)
            {
                d+= this->arr[i]*v.arr[i];
                
            }
            return d; 
        }
};
int main(){
    
    vector <float>v1(3); // flaot is specified for the T
    v1.arr[0] = 4.6; // instead of float it could be int , double etc. on user preferece
    v1.arr[1] = 2.6;
    v1.arr[2] = 1;
    vector <float>v2(3);
    v2.arr[0] = 1.2;
    v2.arr[1] = 0.3;
    v2.arr[2] = 3.3;
    float a =v1.dotproduct(v2);
    cout<<a<<endl;

    return 0;
}