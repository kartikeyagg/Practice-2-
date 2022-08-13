#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    cin>>n;
    int a,b;
    cin>>a;
    int mint = a,maxt = a;
    int count =0;
    for (int i = 1; i < n; i++)
    {
        cin>>a;
        if(a<mint){
            mint = a;
            count++;
        }
        if(a>maxt){
            maxt = a;
            count++;
        }
    }
    
    cout<<count;
    cout<<endl;
    return 0;
  }