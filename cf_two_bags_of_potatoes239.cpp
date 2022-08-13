#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int y,k,n;
    cin>>y>>k>>n;
    int x;
    int z = y;
    if(n-y <= 0){cout<<"-1"<<endl;return 0;}
    // x = ((z+1)*k)-y;
    int count =0;
    int mk = k*((y/k)+1);
    while(mk<=n){
      x = mk-y;
      mk+=k;
      y+=k;
      cout<<x+(k*count)<<" ";
      count++;
    }
    if(count ==0) cout<<"-1";
    cout<<endl;
    return 0;
    
  }