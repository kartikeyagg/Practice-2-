#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    cin>>n;
    int a,b,t;
    // set<int> st;
    map<int,int> mp;
    int flag =0;
    int res =1;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        t = (60*a)+b;
        mp[t]++;
        res=max(res,mp[t]);
    }
    cout<<res<<endl;
    cout<<endl;
    return 0;
  }