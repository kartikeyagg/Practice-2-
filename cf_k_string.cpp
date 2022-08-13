#include<bits/stdc++.h>
using namespace std;
// void solve(string &s, int k){

//     int i=0;int n=s.size();
//     int count =0;
//     char prev = '#';
//     while(i<n){

//         if(s[i]!=prev){
//             prev = s[i];
//             if(count !=k) {cout<<"-1\n"; return ;}
//             count =0;
//         }

//     }

// }  
int main() 
{  
    int k;
    cin>>k;
    string s;
    cin>>s;
    // sort(s.begin(),s.end());
    map<char,int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    int mini = 1e7;
    for(auto x: mp){
        if(x.second < k){cout<<"-1\n";return 0;}
        if(x.second%k !=0){ cout<<"-1\n";return 0;}
        mp[x.first] = x.second/k;
    }
    s ="";
    for (int i = 0; i < k; i++)
    {
        for(auto x:mp){
                for (int h = 0; h < x.second; h++)
                {
                    s+=x.first;
                }
                
        }
    }
    
    cout<<s<<endl;
    // cout<<endl;
    return 0;
  }