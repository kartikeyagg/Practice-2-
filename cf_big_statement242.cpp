#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    cin>>n;
    int a,b;
    int mini=1e9+3,maxi = -1;
    int mz;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        if(a<mini){mini = a;mz = b;ans = i;}
        else if(a == mini){ if(b>mz){
            mz = b;
            ans = i;
        }}
        maxi = max(maxi,b);
    }
    if(maxi == mz){
        cout<<ans+1;
    }
    else cout<<"-1";
    
    cout<<endl;
    return 0;
  }