#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
using namespace std;
int perfectPeak(vector<int> &A){
    vector<int> b;
    b.push_back(0);
    deque<int> c;
    // cout<<"in the func; \n";
    int i,j=0,n=A.size();
    c.clear();
    for ( j = 1; j < n; j++){
    // { cout<<"for loop for c "<<j<<endl;
        c.push_back(A[j]);
    }
    sort(c.begin(),c.end());
    //
    // cout<<"sorted c"<<endl;

    for ( i =1 ; i < n-1; i++){
    // {   cout<<"for loop for i "<<i<<endl;
        if(A[i-1]>b[b.size()-1])  
        {b.push_back(A[i-1]);}
        c.pop_front();
        // sort(b.begin(),b.end());
        // sort(c.begin(),c.end());
        if(b[b.size()-1]<A[i] && c[0]>A[i]){
            return 1; }

    // c.clear();
    // b.clear();    
    }
    
    return 0;
}
  
int main() 
{  vector<int> a ={5, 1, 4, 4};
    int t =perfectPeak(a);
    cout<<t;
    
    
    cout<<endl;
    return 0;
  }