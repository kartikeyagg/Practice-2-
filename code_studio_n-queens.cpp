#include<bits/stdc++.h>
using namespace std;

// here i is the row and column is j;
bool chech_safe(int i,int j,vector<vector<int>> &vec,int n){
    
    int i1 = i,j1 =j;
    while(i>=0 && j>=0){
        if(vec[i][j] ==1){
            return false;
        }
        i--;j--;
    }
    i =i1;j=j1;
    while(j>=0){
        if(vec[i][j] ==1){
            return false;
        }
        j--;
    }
    i = i1;j = j1;
    while(i<n && j>=0){
        if(vec[i][j] ==1){
            return false;
        }
        i++;j--;
    }
    return true;
}
// vec is the chess board 
// i is the column number,
// 
void rec1(vector<vector<int>> &vec, int i,int n,vector<vector<vector<int>>> &res){
        
    if(i>=n){
        res.push_back(vec);
        return;
    }
//     int res=0;
    for(int j=0;j<n;j++){
        // now check
        if(chech_safe(j,i,vec,n))
        {
            vec[j][i] = 1;
            // if check is true call for next column
            rec1(vec,i+1,n,res);
            vec[j][i] = 0;
        }
    }
    
    return ;
    
}


vector<vector<int>> solveNQueens(int n) {
    
    // Write your code here.
    vector<vector<int>> vec(n,vector<int> (n,0));
    vector<vector<vector<int>>> res;
    // call
    rec1(vec,0,n,res);
    // cout<<"size of res is "<<res.size()<<endl;
    vec.clear();
    vector<int> temp;
    int n1 = res.size();
    for(int i=0;i<n1;i++){
        temp.clear();
        for(int j=0;j<res[i].size();j++){
            for(int k=0;k<res[i][j].size();k++){
                temp.push_back(res[i][j][k]);
            }
        }
        vec.push_back(temp);
    }
    return vec;
}
int main() 
{  
    int r = 4;
    vector<vector<int>> vec;
    vec = solveNQueens(r);
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    return 0;
  }