#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n,m;
    cin>>n>>m;
    vector<int> vec(m,0);
    for (int i = 0; i < m; i++)
    {
        cin>>vec[i];
    }
    int res = 1e7;
    sort(vec.begin(),vec.end());
    for (int i = 0; i+n-1 < m; i++)
    {
        res = min(res,vec[n-1+i] - vec[i]);
    }
    
    cout<<res<<endl;
    // cout<<endl;
    return 0;
  }