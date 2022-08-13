#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool rec1(ll a,ll b, ll n,ll j,ll &ans)
{

    if(j == n){
        ans = a;
        return 1;
    }
    if(j>0 && a%10 ==0){ // last element is 0
        ans =a;
        return 1;
    }

    bool t,k;
    for (ll i = 0; i < 10; i++)
    {   
        if(((a*10)+i)%b == 0){
            a = ((a*10)+i);
            t = rec1(a,b,n,j+1,ans);
            if(t) {
        
                return 1;}
            a = a/10;
        }
    }
    
    return 0;

}
  
int main() 
{  
    ll a,b,n;

    cin>>a>>b>>n;
    ll ans =0;
    if(rec1(a,b,n,0,ans))
    {
        string s = to_string(ans);
        string as = to_string(a);
        int t = s.size() - as.size();
        t = n-t;
        for (int i = 0; i < t; i++)
        {
            s+='0';
        }
        cout<<s<<endl;
    }
    else cout<<"-1"<<endl;
    cout<<endl;
    return 0;
  }