#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n,m;
    cin>>n>>m;
    int maxn = -1, minn = 1e9;
    int maxm = -1, minm = 1e9;
    int inp;
    for (int i = 0; i < n; i++)
    {
        cin>>inp;
        maxn = max(maxn,inp);
        minn= min(minn,inp);
    }
    for (int i = 0; i < m;i++)
    {
        cin>>inp;
        maxm = max(maxm,inp);
        minm= min(minm,inp);
    }
    int res = max(maxn,2*minn);
    if(res<minm) cout<<res<<endl;
    else cout<<"-1";
    cout<<endl;
    return 0;
  }