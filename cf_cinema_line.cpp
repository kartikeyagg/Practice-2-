#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    
    cin>>n;
    int inp;
    map<int,int> mp= {{100,0},{25,0},{50,0}};
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>inp;
        if(inp ==100){
            if(mp[50]>0 && mp[25]>0){
                mp[50]--;
                mp[25]--;
            }
            else if(mp[25]>2){
                mp[25]-=3;
            }
            else{
                flag =1;
            }
        }
        else if(inp == 50){
            if(mp[25] >0){
                mp[25]--;
            }
            else{
                flag = 1;
            }
        }
        mp[inp]++;
    }
    if(flag == 0){
        cout<<"YES";
    }
    else cout<<"NO";
    cout<<endl;
    return 0;
  }