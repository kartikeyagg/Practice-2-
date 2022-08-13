#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    string s;
    cin>>s;
    int flag =0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='0'){
            flag = 1;
            s = s.substr(0,i)+s.substr(i+1,n-i-1);
            break;
        }
    }
    if(flag==1)cout<<s;
    else cout<<s.substr(0,n-1);
    cout<<endl;
    return 0;
  }