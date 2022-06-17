#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
int hammingDistance(vector<long long> &A)
 {
    long long ans =0, n=A.size();
    for(int i=0;i<32;i++){

        long long count1=0, count0 =0;

        for(int j= 0;j<n;j++){
            
           if( ((1<<i) &A[j]) ==0 )count0++;
           else count1++;
        }
        ans+= (2*count1*count0)%mod;
        ans = ans%mod;

    }
return ans;
}
ll solve(ll t, ll k)
{
    if(t==k){
        return t;
    }
}

int main() 
{  
    int n;
    cin>>n;
    long long t,k;
    vector<ll> emp;
    for (int i = 0; i < n; i++)
    {
        cin>>t>>k;
        // cout<<solve(t,k);
        emp = {t,k};
        cout<<hammingDistance(emp)/2<<endl;
    }
    
    
    cout<<endl;
    return 0;
  }