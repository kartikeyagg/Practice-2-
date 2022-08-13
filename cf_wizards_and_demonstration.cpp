#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    float n,x,y;
    cin>>n>>x>>y;
    float t = (y*n)/100;
    t = ceil(t);
    cout<<max(int(t-x),0);
    cout<<endl;
    return 0;
  }