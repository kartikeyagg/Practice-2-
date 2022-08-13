#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    cin>>n;
    map<int,int> mp;
    // mp[]
    int k;
    for (int i = 0; i < n; i++)
    {
        cin>>k;
        
        mp[k]++;
    }
    if(mp.find(7)!=mp.end()) {
        cout<<"-1"<<endl; return 0;
    }
    if(mp[1]!= double(n/3)){
        cout<<"-1"<<endl;return 0;
    }
    if(mp[2]+mp[3] != double(n/3)){
        cout<<"-1"<<endl;return 0;
    }
    if(mp[3] > mp[6] || mp[4]>mp[2]){
        cout<<"-1"<<endl;return 0;

    }
    while(mp[4]>0){

        cout<<"1 2 4"<<endl;
        mp[4]--;
        mp[1]--;
        mp[2]--;

    }
    while(mp[2]>0){
        cout<<"1 2 6"<<endl;
        mp[1]--;
        mp[6]--;
        mp[2]--;
    }
    while(mp[6]>0){
        cout<<"1 3 6"<<endl;
        mp[1]--;
        mp[3]--;
        mp[6]--;
    }
    
    cout<<endl;
    return 0;
  }