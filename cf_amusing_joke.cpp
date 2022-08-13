#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    // set<int> st;
    // st.insert(0);
    // int t = st.insert(43).second;
    // cout<<t<<endl;
    // for(auto x: st){     // for other testing purpose
    //     cout<<x<<" ";
    // }cout<<endl;
    // return 0;
    string s;
    map<char,int> mp;
    cin>>s;
    for(auto x:s){
        if(mp.find(x) == mp.end()){
            mp[x] = 1;
        }
        else{
            mp[x]++;
        }
    }
    cin>>s;
    for(auto x:s){
        if(mp.find(x) == mp.end()){
            mp[x] = 1;
        }
        else{
            mp[x]++;
        }
    }
    cin>>s;
    for(auto x: s){
        if(mp.find(x) == mp.end()){
            cout<<"NO \n";return 0;
        }
        mp[x]--;
    }
    for(auto x: mp){

        if(x.second !=0){
            cout<<"NO\n"; return 0;
        }

    }
    cout<<"YES";

    
    cout<<endl;
    return 0;
  }