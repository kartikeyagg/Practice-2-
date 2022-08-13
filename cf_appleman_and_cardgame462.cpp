#include<bits/stdc++.h>
using namespace std;
#define ll long long  
int main() 
{  
    ll n,k;
    cin>>n>>k;
    vector<ll> vec(26,0);
    char a;
    for (ll i = 0; i < n; i++)
    {
        cin>>a;
        vec[a-65]++;
    }
    sort(vec.begin(),vec.end());
    ll res =0;
    ll temp;
    // for(auto x: vec){
    //     cout<<x<<" ";
    // }cout<<endl;
    
    // tostmen cards not apple men cards
    for (ll i = 25; i>=0; i--)
    {
        // base condition for k;
        // cout<<vec[i]<<endl;
        if(k>vec[i]){
            res+=(vec[i]*vec[i]);
            k-=vec[i];
        }
        else{
            // temp = k;
            res+=(k*k);
            k=0;
            break;
        }

    }
    
    cout<<res<<endl;
    cout<<endl;
    return 0;
  }


