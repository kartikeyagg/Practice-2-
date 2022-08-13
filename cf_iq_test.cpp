#include<bits/stdc++.h>
using namespace std;

bool solve(vector<string> &vec){

    int mx=0,mt=0;

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            mx =0 ;
            // cout<<"for i and j = "<<i<<" "<<j<<endl;
            for (int k = 0; k < 2; k++)
            {
                for (int h = 0; h < 2; h++)
                {
                    if(vec[i-k][j-h] == '.'){
                        // cout<<"fds"<<endl;
                        mx++;
                    }
                    // else mt++;
                }
                
            }
            if(!(mx==2)){
                return 1;
            }
            
        }
        
    }
    
    return 0;

}
  
int main() 
{  
    int n =4;
    vector<string> vec;

    string s;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        vec.push_back(s);
    }
    if(solve(vec)){
        cout<<"YES"<<endl;

    }
    else cout<<"NO"<<endl;
    
    cout<<endl;
    return 0;
  }