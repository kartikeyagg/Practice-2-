#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n,k,a,b;
    cin>>n>>k;
    int maxj = -1e9;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        if(b<=k){
            maxj = max(maxj,a);
        }
        else{
            maxj = max(maxj,a-(b-k));
        }
    }
    cout<<maxj<<endl;
    // cout<<endl;
    return 0;
  }