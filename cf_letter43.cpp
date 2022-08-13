#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
    // cout<<s<<endl;
    map<char,int> mp;
    for(auto x:t){
        if(x == ' ') continue;
        mp[x]++;
    }
    for(auto x: s){
        if(x == ' ') continue;
        if(mp.find(x) == mp.end()) continue;
        mp[x]--;

    }
    for(auto x: mp){
        if(x.second >0){
            cout<<"NO"<<endl;return 0;
        }
    }
    cout<<"YES";
    cout<<endl;
    return 0;
  }