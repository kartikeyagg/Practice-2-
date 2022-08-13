#include<bits/stdc++.h>
using namespace std;
#define ll long long  
int main() 
{  
    int n;
    cin>>n;
    string t,k;
    int count =0;
    ll tk,p,g;
    for (int i = 0; i < n; i++)
    {
        cin>>tk;
        count =0;
        p = tk;
        while(p>0)
        {
            p = p/10;
            count++;
        }
        g = pow(10,count-1);
        cout<<tk-g<<endl;

    }

    
    cout<<endl;
    return 0;
  }