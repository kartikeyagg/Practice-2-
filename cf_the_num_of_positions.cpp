#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int a,b,n;
    cin>>n>>a>>b;
    int res=0;
    for (int i = n-b-1; i < n; i++)
    {
        if(i>=a){
            res = n-i; break;
        }
    }
    
    cout<<res;
    cout<<endl;
    return 0;
  }