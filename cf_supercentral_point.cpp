#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> &a, pair<int,int> &b){

    if(a.first == b.first){
        return a.second<b.second;
    }
    return a.first<b.first;

}

int solve(int n,vector<pair<int,int>> &vec ){

    sort(vec.begin(),vec.end(),cmp);
    map<int,set<int>> mp;
    for (int i = 0; i < n; i++)
    {
        if(mp.find(vec[i].second) == mp.end()){
            mp[vec[i].second] = {vec[i].first};
        }
        else{
            mp[vec[i].second].insert(vec[i].first);
        }
    }
    
    set<int> sk;
    int t;
    int ans =0;
    for (int i = 1 ; i < n-1; i++)
    {   t =vec[i].first; 
        sk.clear();
        if( t== vec[i+1].first && t == vec[i-1].first){


            sk = mp[vec[i].second];
            
            auto jt = sk.find(t);
            if(jt!=(--sk.end()) && jt!=sk.begin() ){
                ans++;
            }

        }

    }
    return ans;

}

int main() 
{  
    int n;
    cin>>n;
    int a,b;
    vector<pair<int,int>> vec;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        vec.push_back({a,b});
    }
    cout<<solve(n,vec)<<endl;
    
    cout<<endl;
    return 0;
  }