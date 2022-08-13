#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    cin>>n;
    map<int,pair<int,int>> mp;
    int k;
    for (int i = 0; i < n; i++)
    {
        cin>>k;
        if(mp.find(k) == mp.end()){
            mp[k] = {-1,i};
        }
        else{
            if (mp[k].first == -2){ continue;}
            if(mp[k].first == -1){
                mp[k] = {i-mp[k].second,i};
            }
            else if( i - mp[k].second != mp[k].first){
                mp[k] = {-2,i};
            }
            else{
                mp[k] = {mp[k].first, i};
            }
        }
    }
    int count =0;
    for(auto x:mp){
        
        // cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<endl;
        if(x.second.first > -2){
            count++;
        }
    }
    cout<<count<<endl;
    for(auto x:mp){
        
        // cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<endl;
        if(x.second.first > -2){

            if(x.second.first == -1){
                cout<<x.first<<" "<<"0"<<endl;
            }
            else{
                cout<<x.first<<" "<<x.second.first<<endl;
            }

        }
    }
        
    cout<<endl;
    return 0;
  }