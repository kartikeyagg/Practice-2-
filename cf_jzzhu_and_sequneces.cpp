#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
ll solve(vector<ll> &vec,ll n){

    ll t = n/3;
    ll m=1;
    if(t%2 == 1){
        m = -1;
    }
    
    t = n%3;

    return vec[t]*m;

}


int main() 
{  
    ll  a,b,n;
    cin>>a>>b>>n;
    n--;
    vector<ll> vec;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(b-a);
    ll res = solve(vec,n);
    // cout<<"original res is "<<res<<endl;
    if(res<0){
        res = res%mod;
        // cout<<"Now res is "<<res<<endl;
        if(res<0)
        cout<<mod +res<<endl;
        else
        cout<<res<<endl;
        
    }
    else cout<<(res%mod)<<endl;
    // cout<<endl;
    return 0;
  }