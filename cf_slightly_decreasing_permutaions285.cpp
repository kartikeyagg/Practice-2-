#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n,k;
    cin>>n>>k;
    int  t = k+1;
    while(t>=1){
        cout<<t<<" ";
        t--;
    }
    t =k+2;
    while(t<=n){
        cout<<t<<" ";
        t++;
    }
    cout<<endl;
    return 0;
  }