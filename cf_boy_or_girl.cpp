#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    string s;
    cin>>s;

    unordered_set<char> st;

    for(auto x:s){
        st.insert(x);
    }
    if(st.size()%2 ==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    
    cout<<endl;
    return 0;
  }