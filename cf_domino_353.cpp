#include<bits/stdc++.h>
using namespace std;
#define ll long long
  
int main() 
{  
    int n;
    cin>>n;
    ll sum1 =0,sum2 =0;
    int a,b;
    int odd_even =0;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        if((abs(a-b))%2==1){
            odd_even =1;
        }
        sum1+=a;
        sum2+=b;
    }
    if(sum1%2 ==0 && sum2%2==0){ //both are  even
        cout<<"0"<<endl;return 0;
    }
    if((sum1+sum2)%2 == 1 ){ // one is odd one is even
        cout<<"-1"<<endl; return 0;
    }
    if(odd_even==0){ // both are odd
        cout<<"-1"<<endl; return 0;
    }
    cout<<"1"<<endl;
    
    cout<<endl;
    return 0;
  }