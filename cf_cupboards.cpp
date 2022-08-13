#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    cin>>n;
    int r1=0,l1 =0;
    int a,b;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        if(a){
            l1++;
        }
        if(b){
            r1++;
        }
    }
    int res = 0;
    if(l1>n/2) {
        res+= n-l1;
    }
    else res+=l1;
    if(r1>n/2){
        res+= n-r1;
    }
    else res+=r1;
    cout<<res;
    cout<<endl;
    return 0;
  }