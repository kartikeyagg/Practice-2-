#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n,m;
    cin>>n>>m;

    int a,b;
    int count=0;
    int t;
    for ( a = 0; a*a <= n ; a++)
    {
        b = n-(a*a);
        if(b<0) break;
        t = m-(b*b);
        if(t==a){
            count++;
        }

    }
    cout<<count<<endl;

    cout<<endl;
    return 0;
  }