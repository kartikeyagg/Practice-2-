#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int r,c,s;
    cin>>r>>c;
    vector<string> vec;
    string t;
    for (int i = 0; i < r; i++)
    {
        cin>>t;
        vec.push_back(t);
    }
    set<int> rows,colums;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(vec[i][j] == 'S'){
                rows.insert(i);
                colums.insert(j);
            }
        }
        
    }
    int ans =0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(rows.find(i) != rows.end() && colums.find(j)!=colums.end()){
                continue;                
            }
            else ans++;
        }
        
    }
    
    cout<<ans;
    
    cout<<endl;
    return 0;
  }