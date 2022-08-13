#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &vec,int b){
    int st,en;
    // cin>>st>>en;
    // max and min hash
    map<int,int> mx,mn;
    for (int i = 0; i < vec.size(); i++)
    {
        if(mx.find(vec[i]) == mx.end()){
            mx[vec[i]] = i;
        }
        else{
            mx[vec[i]] = max(i,mx[vec[i]]);
        }
        if(mn.find(vec[i]) == mn.end()){
            mn[vec[i]] = i;
        }
        else{
            mn[vec[i]] = min(i,mn[vec[i]]);
        }
    }
    for (int i = 0; i < b; i++)
    {
        cin>>st>>en;
        if(mn.find(st) == mn.end() || mx.find(en) == mx.end()){
            cout<<"NO"<<endl;
        }
        else if(mn[st] <=mx[en]){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
    return ;

}

int main() 
{  
    int t;
    cin>>t;
    int a,b,c;
    vector<int> vec;
    for (int i = 0; i < t; i++)
    {
        cin>>a>>b;
        vec.clear();
        for (int j = 0; j < a; j++)
        {
            cin>>c;
            vec.push_back(c);
        }
        solve(vec,b);
        
    }
    
    
    cout<<endl;
    return 0;
  }