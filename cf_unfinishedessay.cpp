
#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int t;
    cin>>t;
    int n,c,q;
    string s;
    int l,r;
    for (int i = 0; i < t; i++)
    {
        cin>>n>>c>>q;
        cin>>s;
        for (int j = 0; j < c; j++)
        {
            cin>>l>>r;
            s = s+ s.substr(l-1,r-l+1);
        }
        for (int j = 0; j < q; j++)
        {
            cin>>l;
            cout<<s[l-1]<<endl;
        }
        
        
    }
    
    cout<<endl;
    return 0;
  }