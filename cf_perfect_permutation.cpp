#include<bits/stdc++.h>
using namespace std;
void solve(int n)  {

    if(n%2 ==1) {cout<<"-1"<<endl; return ;}

    vector<int> vec(n,0);

    int t=2;
    int i =0;
    while(i<n){

        vec[i] = t;
        t+=2;
        i+=2;
        
    }
    i=1;
    t =1;
    while(i<n){

        vec[i] = t;
        i+=2;
        t+=2;

    }
    for(auto x: vec){
        cout<<x<<" ";
    }
    cout<<endl;
    return;
    

}
int main() 
{  
    int n;
    cin>>n;
    
    solve(n);
    
    // cout<<endl;
    return 0;
  }