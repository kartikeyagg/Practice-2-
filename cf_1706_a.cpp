#include<bits/stdc++.h>
using namespace std;

void solve(string &s){
    int n,m;
    cin>>n>>m;
    s = string(m,'B');
    int first1,second1;
    int inp;
    for (int i = 0; i < n; i++)
    {
        cin>>inp;
        first1 = max(inp-1,m-inp);
        second1 = min(m-inp,inp-1);

        if(s[second1] == 'B') s[second1] = 'A';
        else s[first1] = 'A';

        
    }

    return ;
    
}
  
int main() 
{  
    int t;cin>>t;
    int n,m;
    string s;
    for (int i = 0; i < t; i++)
    {   
        s.clear();
        solve(s);
        cout<<s<<endl;;
    }
    
    cout<<endl;
    return 0;
  }