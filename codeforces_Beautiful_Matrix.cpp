#include<bits/stdc++.h>
using namespace std;
// int solve(vector<vector<int>> &vec){

    

// }
  
int main() 
{  
    vector<vector<int>> vec(5,vector<int> (5));
    
    pair<int,int> pr;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>vec[i][j];
            if(vec[i][j] == 1){
                pr= {i,j};
            }
        }

        
    }
    cout<<abs(pr.first -2)+abs(pr.second-2)<<endl;
    

    
    cout<<endl;
    return 0;
  }