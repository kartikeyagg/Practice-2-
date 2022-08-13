#include<bits/stdc++.h>
using namespace std;
#define ll long long  
ll factorial(ll n){

    return (n==1 || n==0) ? 1:n*factorial(n-1);

}
int main() 
{  

    
    ll n;
    cin>>n;
    vector<ll> vec(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    ll maxt = *max_element(vec.begin(),vec.end());
    ll mint = *min_element(vec.begin(),vec.end());
    cout<<maxt-mint<<" ";
    if(maxt==mint){
        cout<<((n)*(n-1))/2<<endl; 
        return 0;
    }
    ll count1=0, count2=0;
    for (ll i = 0; i < n; i++)
    {
        if(vec[i] == maxt){
            count1++;
        }
        else if(vec[i] == mint){
            count2++;
        }
    }
    cout<<count2*count1<<endl;
    
    // cout<<endl;
    return 0;
  }