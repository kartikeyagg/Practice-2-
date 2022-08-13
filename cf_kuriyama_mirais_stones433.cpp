#include<bits/stdc++.h>
using namespace std;
#define ll long long  
  
int main() 
{  
    ll n;
    cin>>n;
    ll sum1=0;
    vector<int> vec(n,0) ;
    vector<ll> vi(n+1,0);
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
        sum1+=vec[i];
        vi[i+1] = sum1;
    }
    sort(vec.begin(),vec.end());
    vector<ll> ui(n+1,0);
    sum1 =0;
    for (int i = 0; i < n; i++)
    {
        sum1+=vec[i];
        ui[i+1] = sum1;
    }
    

    int m;
    cin>>m;
    int t,l,r;

    for (int i = 0; i < m; i++)
    {
        cin>>t>>l>>r;
        if(t == 1){
            // cout<<"t"<<endl;
            cout<<vi[r]-vi[l-1]<<endl;
        }
        else{
            // cout<<"t"<<endl;
            cout<<ui[r]-ui[l-1]<<endl;
        }
    }
    
    
    
    cout<<endl;
    return 0;
  }