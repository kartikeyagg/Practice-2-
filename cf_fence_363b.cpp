#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n,k;
    cin>>n>>k;
    vector<int> vec;
    vec.push_back(0);
    int sum1 =0,inp;
    for (int i = 0; i < n; i++)
    {
        cin>>inp;
        sum1 +=inp;
        vec.push_back(sum1);
        // vec[i] 
    }
    // cout<<"the sum vector is "<<endl;
    // for(auto x: vec){
    //     cout<<x<<" ";
    // }cout<<endl;
    int j =0,h = k;
    int  res = 1e9;
    int ind =0 ;
    n = vec.size();
    while(h<n && j<n){
        // res = min(res,vec[h]-vec[j]);
        if(vec[h]-vec[j] <res){
            res = vec[h]-vec[j];
            ind  = j;
        }
        h++;j++;
    }
    // cout<<"sum is "<<res<<endl;
    cout<<ind+1;
    cout<<endl;
    return 0;
  }