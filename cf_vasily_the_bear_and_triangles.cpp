#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    long long x,y;
    cin>>x>>y;
    if(x<0){

        cout<<-(abs(x)+abs(y))<<" 0 0 "<<((abs(x)+abs(y))*(y/abs(y)));

    }
    else{
        cout<<"0 "<<((x+abs(y))*(y/abs(y)))<<" "<<(x+abs(y))<<" 0";
    }
    
    cout<<endl;
    return 0;
  }