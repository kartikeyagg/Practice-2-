#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;cin>>n;
    int inp;
    int sum1= 0;
    for (int i = 0; i < n; i++)
    {
        cin>>inp;
        sum1+=inp;
    }
    
    int k = sum1/n;
    if(sum1%n !=0){
        cout<<n-1;
    }
    else{
        cout<<n;
    }
    
    cout<<endl;
    return 0;
  }