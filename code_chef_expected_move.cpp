#include<bits/stdc++.h>
using namespace std;

#define ll long long

map<ll,ll> mp;

ll t1(ll x, ll n){

    if(mp.find(x)!=mp.end()){
        return mp[x];
    }
    ll ans= 0;
    if(x == 1){
        return 0;
    }
    if(x!=n)
    ans = 2+t1(x+1,n)+t1(x-1,n);

    else{
        ans = 2+t1(x,n)+t1(x-1,n);
    }

    mp[x] = ans;
    
    return ans;


}

int main() 
{  
    
    
    cout<<endl;
    return 0;
  }