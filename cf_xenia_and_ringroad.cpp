#include<bits/stdc++.h>
using namespace std;


#define ll long long
int main() 
{
    int n,m,k;
    cin>>n>>m;
    vector<int> vec;
    for (int i = 0; i < m; i++)
    {
        cin>>k;
        --k;
        vec.push_back(k);
    }
    int prev=0;
    ll res=0;
    // cout<<"vec is "<<endl;
    // for(auto x: vec){
    //     cout<<x<<" ";
    // }cout<<endl;
    for (int i = 0; i < m; i++)
    {   
        // cout<<"for i= "<<i<<endl;
        if(vec[i]>=prev){
            res+= vec[i]-prev;
        }
        else{
            res+= n-prev+vec[i];
        }
        // cout<<"res is "<<res<<endl;
        prev = vec[i];
    }
    
      
    cout<<res<<endl;
    
    // cout<<endl;
    return 0;
  }