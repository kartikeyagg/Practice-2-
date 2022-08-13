#include<bits/stdc++.h>
using namespace std;
#define ll long long  
int main() 
{  
    ll l,r;
    cin>>l>>r;
    queue<ll> q;
    q.push(4);
    q.push(7);
    ll t,sum=0;
    ll j = l;
    while(j<=r){
        
        t = q.front();
        
        if(t>=j){
            sum+=t;
            j++;
        }
        else{
            q.pop();
            q.push(t*10 +  4); //
            q.push(t*10 +7);
        }

    }

    cout<<sum;
    cout<<endl;
    return 0;
  }