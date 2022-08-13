#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n,m,inp,h;
    cin>>n>>m;

    map<int,int> mp;
    map<int,set<int>> m1;
    vector<vector<int>> vec(n,vector<int> (0));
    for (int i = 0; i < n; i++)
    {
        cin>>inp;
        for (int j = 0; j < inp; j++)
        {   
            cin>>h;
            vec[i].push_back(h);
            mp[h]++;
        }
        
        
    }

    int ans=0;
    int flag =0;
    for (int i = 0; i < n; i++)
    {   
        flag =0;
        for (int j = 0; j < vec[i].size(); j++)
        {
            if(mp[vec[i][j]] >=2){
                flag = 1;
            }
        }
        if(flag == 0) ans++;
        
    }
    
    cout<<ans;

    cout<<endl;
    return 0;
  }