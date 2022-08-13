#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    string s;
    // cin<<s;
    cin>>s;
    set<char> st = {'H','Q','9'};
    
    for (int i = 0; i < s.size(); i++)
    {
        if(st.find(s[i]) != st.end()){
            cout<<"YES\n"; return 0;
        }
    }
    
    cout<<"NO";
    cout<<endl;
    return 0;
  }