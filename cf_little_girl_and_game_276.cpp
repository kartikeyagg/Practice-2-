#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    string s;
    cin>>s;
    map<char,int> mp;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    int count0 =0,count1 =0;
    for(auto x: mp){

        if(x.second%2 ==1){
            count0++;
        }
        else count1++;

    }
    int res =0;
    res = count0%2;
    if((!res) && count0 >0 ) cout<<"Second";
    else cout<<"First";
    
    cout<<endl;
    return 0;
  }
