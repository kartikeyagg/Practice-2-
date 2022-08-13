#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    cin>>n;
    int k=0;
    int a,b;
    int res =0;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        k = k-a;
        k = k+b;
        res = max(res,k);

    }
    
    cout<<res<<endl;
    
    // cout<<endl;
    return 0;
  }