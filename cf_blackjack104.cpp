#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    cin>>n;
    map<int,int> mp;
    for (int i = 1; i < 11; i++)
    {
        mp[i] = 4;
    }
    mp[11] = 4;
    mp[10]+=11;

    int k = n-10;
    if(k<=0){
        cout<<"0"<<endl;return 0;
    }
    cout<<mp[k]<<endl;
    cout<<endl;
    return 0;
  }