#include<bits/stdc++.h>
using namespace std;

int main() 
{  
    string s,t;
    cin>>s;
    t.clear();
    int n = s.length();
    set<char> st = {'a','e','i','o','u','y'};
    for (int i = 0; i < n; i++)
    {   s[i] = tolower(s[i]);
        if(st.find(s[i])!=st.end()){ // means found
            continue;
        }
        else{
            t+='.';
            t+=s[i]; 
        }
    }
    cout<<t;
    cout<<endl;
    return 0;
  }