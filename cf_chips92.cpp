#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n,m;
    cin>>n>>m;

    int t= ((n+1)*n)/2;

    t = m%t;
    int j =1;
    while(t-j>=0){

        t-=j;
        j++;
    }
    cout<<t<<endl;
    cout<<endl;
    return 0;
  }