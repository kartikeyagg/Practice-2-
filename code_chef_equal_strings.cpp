#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n,k;
    cout<<endl;
    unordered_map<char,int> mp;
    string s1,s2;
    cin>>n;

    for (int i = 0; i < n; i++)
    {   mp.clear();
        cin>>k;
        cin>>s1;
        cin>>s2;
        for (int j = 0; j < k; j++)
        {
            if(s1[j]!=s2[j]){

                if(mp.find(s2[j]) != mp.end()){
                    mp[s2[j]]++;
                }
                else{
                    mp[s2[j]] =1;
                }
            }
        }

    cout<<mp.size()<<endl;
        

    }
    
    
    // cout<<endl;
    return 0;
  }