#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int t;cin>>t;
    int n,x,k;
    vector<int> vec;
    for (int i = 0; i < t; i++)
    {
        cin>>n>>x;vec.clear();
        n = 2*n;
        for (int j = 0; j < n; j++)
        {
            cin>>k;
            vec.push_back(k);
        }
        sort(vec.begin(),vec.end());
        int flag =0;
        for (int j = 0; j < n/2; j++)
        {
            if(vec[(n/2)+j] - vec[j] <x){
                cout<<"NO"<<endl;  flag =1;break;
            }
        }
        if(flag ==0)
        {cout<<"YES"<<endl;}
        
    }
    // cout<<endl;
    return 0;
  }