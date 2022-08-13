#include<bits/stdc++.h>
using namespace std;
#define ll long long  
int main() 
{  
    ll n,k,t,a;
    cin>>n>>k;
    if(n%2 == 1){

        if(k<= (n+1)/2){

            cout<<(k*2-1)<<endl;return 0;
        }
        else{
            cout<<((k-((n+1)/2))*2)<<endl;return 0;
        }
    }

    if(k<=n/2){
        cout<<(2*k)-1<<endl;
    }
    else{
        cout<<(k-(n/2))*2<<endl;
    }

    cout<<endl;
    return 0;
  }