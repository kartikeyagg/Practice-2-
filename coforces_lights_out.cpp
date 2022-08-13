#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &vec,vector<vector<int>> &res){

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(vec[i][j]%2 ==1){
                
                res[i][j] = (res[i][j]+1)%2;

                if(i>0){
                    res[i-1][j] = (res[i-1][j]+1)%2;
                }
                if(j>0){
                    res[i][j-1] = (res[i][j-1]+1)%2;
                }
                if(i<2){
                    res[i+1][j] = (res[i+1][j]+1)%2;
                }
                if(j<2){
                    res[i][j+1] = (res[i][j+1]+1)%2;
                }

            }
        }
        
    }
    return ;

}

int main() 
{  
    vector<vector<int>> vec(3,vector<int> (3,0));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>vec[i][j];
        }
        
    }
    vector<vector<int>> res(3,vector<int>(3,1));
    solve(vec,res);
    for(auto x:res){
        for(auto y:x){
            cout<<y;
        }
    cout<<endl;
    }
    cout<<endl;
    return 0;
  }