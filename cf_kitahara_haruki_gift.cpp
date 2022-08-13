#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    cin>>n;
    int k;
    int count100=0,count200 =0;
    for (int i = 0; i < n; i++)
    {
        cin>>k;
        if(k == 100){count100++;}
        else count200++;

    }
    if(count100%2 ==0 && count200%2 ==0){
        cout<<"YES"<<endl; return 0;
    }
    if(count200%2 ==0 ){
        cout<<"NO"<<endl; return 0;
    }
    if(count100%2 == 0 && count100>0){
        cout<<"YES"<<endl; return 0;
    }
    cout<<"NO";
    cout<<endl;
    return 0;
  }