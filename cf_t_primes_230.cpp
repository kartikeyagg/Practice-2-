#include<bits/stdc++.h>
using namespace std;
#define ll long double
int main() 
{  
    
    int n;
    cin>>n;
    vector<ll> vec(n,0);
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    // ll maxv = *max_element(vec.begin(),vec.end());
    ll maxsq =0 ;
    ll temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp = sqrt(vec[i]);
        if(temp == ((long long)(temp))){
            
            maxsq = max(temp,maxsq);
        }
    }
    vector<int> vi(maxsq+1,1);
    for (ll i = 2; i < sqrt(maxsq+1); i++)
    {
        if(vi[i] == 0) continue;
        ll num = i+i;
        while(num<=maxsq){
            vi[num] = 0;
            num = num+i;
        }

    }
    

    for (int i = 0; i < n; i++)
    {
        temp = sqrt(vec[i]);
        if(temp != ((long long)(temp) )|| temp ==1){ // if vec[i] is not a squre number
            cout<<"NO"<<endl;continue;
        }
        if(vi[temp] == 1){ // sqrt of vec[i] is prime
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
    
    cout<<endl;
    return 0;
  }