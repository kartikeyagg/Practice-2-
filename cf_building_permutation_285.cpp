#include<bits/stdc++.h>
using namespace std;
#define ll long long  
int main() 
{  
    // cout<<INT_MAX<<endl;    
    int n;
    cin>>n;
    ll sum1 =0;
    int inp;
    vector<int> vec(n,0);
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
        
    }
    sort(vec.begin(),vec.end());

    for (int i = 0; i < n; i++)
    {
        sum1+=abs(vec[i]-(i+1));
    }
    
    cout<<sum1;
    cout<<endl;
    return 0;
  }
//   cin>>inp;
//         if(inp>0 && inp<=n){
//             if(vec[inp] == 0){
//                 vec[inp]=1;
//             }
//             else sum1+=inp;
//         }
//         else sum1+=inp;