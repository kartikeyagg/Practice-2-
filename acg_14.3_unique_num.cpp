#include <iostream>
#include <vector>
using namespace std;
// A prog to find a unique num in an array where all nums
// except one apear twice;
int unique1(vector<int> a){

    int n = a.size();
    int xorsum =0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum^a[i];
        
    }

    return xorsum;
   
}
int getbit(int n,int pos){

    return (1<<pos & n)!=0;

}
// other function in this case all elements are present twice except 
// 2 of them
vector <int> unique2(vector<int> A){
    int n = A.size();
    vector<int> res;
    int xorsum =0;
    for (int i = 0; i < n; i++)
    {
        xorsum  =xorsum^ A[i];

    }
    int xorsum2 =xorsum;
    cout<<"xorsum is "<<xorsum2<<endl;
    int setbit =0,pos =0;
    while(setbit==0){
        setbit = xorsum &1;
        pos++;
        xorsum =  xorsum>>1;
    }
    cout<<"pos is "<<pos<<endl;
    
    int xorn=0;
    for (int i = 0; i < n; i++)
    {
        if(getbit(A[i],pos-1)){

            xorn= xorn^A[i];
        }
    }
    res.push_back(xorn);
    res.push_back(xorsum2^xorn);

    return res;
    
    
}
  
int main() 
{  vector<int> a = {1,2,5,7,2,3,1,3};
    vector<int> b = unique2(a);

    cout<<"The unique element are "<<b[0]<<" "<<b[1];


    
    cout<<endl;
    return 0;
  }