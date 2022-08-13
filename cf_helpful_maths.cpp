#include<bits/stdc++.h>
using namespace std;

void solve(string &s){
    string k="";
    for(auto x:s){
        if(x!='+'){
            k+=x;
        }
    }
    s.clear();
    sort(k.begin(),k.end());
    // cout<<"k is "<<k<<endl;

    for(auto x: k){
        s+= x;
        s+='+';
    }
    s.pop_back();
    // cout<<"s is "<<s<<endl;
    return ;
}
  
int main() 
{  
    string s;
    cin>>s;
    solve(s);
    cout<<s;
    
    cout<<endl;
    return 0;
  }