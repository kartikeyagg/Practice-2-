#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    ofstream f1;
    f1.open("output.txt");
    ifstream fi;
    fi.open("input.txt");
    int n;
    // cin>>n;
    fi>>n;
    // f1>>n;
    int inp;
    map<int,vector<int>> mp;
    for (int i = 0; i < 2*n; i++)
    {
        // cin>>inp;
        fi>>inp;
        if(mp.find(inp) == mp.end()){
            mp[inp] = {i};
        }
        else{
            mp[inp].push_back(i);
        }
    }
    for(auto x: mp){
        if(x.second.size()%2==1){
            // cout<<"-1"<<endl;
            f1<<"-1"<<endl;
            f1.close();
            return 0;
        }
        }
    for(auto x:mp){
        for (int i = 0; i < x.second.size(); i+=2)
        {
            // cout<<x.second[i]+1<<" "<<x.second[i+1]+1<<endl;
            f1<<x.second[i]+1<<" "<<x.second[i+1]+1<<endl;
        }
        
    }
    f1.close();
    cout<<endl;
    return 0;
  }