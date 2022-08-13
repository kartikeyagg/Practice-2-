#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    cin>>n;
    multiset<int> s1,s2;
    int inp;
    string s;
    cin>>s;
    for (int i = 0; i < n; i++)
    {
        inp = s[i]-'0';
        s1.insert(inp);
    }
    for (int i = n; i < 2*n; i++)
    {
        inp = s[i]-'0';
        
        s2.insert(inp);
    }
    // cout<<"s1 and s2 are "<<endl;
    // for(auto x:s1) cout<<x<<" ";
    // cout<<endl;
    // for(auto x:s2) cout<<x<<" ";
    // cout<<endl;
    auto t1 = s1.begin();
    auto t2 = s2.begin();
    // cout<<*t1<<endl;
    if(*t1 == *t2){ cout<<"NO";return 0;}
    else if( *t1 <*t2){
        while(t1!=s1.end()){
            if(*t1>=*t2){
                cout<<"NO"; return 0;
            }
            t1++;t2++;
        }
    }
    else if(*t1>*t2){
        while(t1!=s1.end()){
            if(*t1<=*t2){
                cout<<"NO"; return 0;
                
            }
            t1++;t2++;
        }
    }
    cout<<"YES";
    cout<<endl;
    return 0;
  }