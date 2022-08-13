#include<bits/stdc++.h>
using namespace std;

void solve(string &s){
    int n = s.size();
    if(n<=10) return;

    s = s[0]+to_string(n-2)+s[n-1];
    return;

} 

int main() 
{  
    int n;
    cin>>n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        solve(s);
        cout<<s<<endl;
    }
    
    
    cout<<endl;
    return 0;
  }