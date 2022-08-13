#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll rec(vector<string> &vec,int i,int j,int n,int m,vector<vector<int>> &memo){

    if(i == n){
        return 0;
    }

    if(j == m){
        return rec(vec,i+1,0,n,m,memo);

    }
    if(memo[i][j]!=-1){
        return memo[i][j];
    }
    if(vec[i][j]!='W'){
        return memo[i][j]=rec(vec,i,j+1,n,m,memo);
    }
    ll ans =0;
    if(i>0 && vec[i-1][j] == 'P'){

        vec[i][j] = '.';
        vec[i-1][j] = '.';
        ans = max(ans,1+rec(vec,i,j+1,n,m,memo));
        vec[i][j] = 'W';
        vec[i-1][j] = 'P';
    }
    if(j>0 && vec[i][j-1] == 'P'){

        vec[i][j] = '.';
        vec[i][j-1] = '.';
        ans = max(ans,1+rec(vec,i,j+1,n,m,memo));
        vec[i][j] = 'W';
        vec[i][j-1] = 'P';
    }
    if(i<n-1 && vec[i+1][j] == 'P' ){

        vec[i][j] = '.';
        vec[i+1][j] = '.';
        ans = max(ans,1+rec(vec,i,j+1,n,m,memo));
        vec[i][j] = 'W';
        vec[i+1][j] = 'P';

    }
    if(j<m-1 && vec[i][j+1] == 'P' ){

        vec[i][j] = '.';
        vec[i][j+1] = '.';
        ans = max(ans,1+rec(vec,i,j+1,n,m,memo));
        vec[i][j] = 'W';
        vec[i][j+1] = 'P';

    }
    ans = max(ans,rec(vec,i,j+1,n,m,memo));
    
return memo[i][j]=ans;
}
  
int main() 
{  
    
    int n,m;
    cin>>n>>m;
    vector<string> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    vector<vector<int>> memo(n+1,vector<int>(m+1,-1));
    cout<<rec(vec,0,0,n,m,memo);
    cout<<endl;
    return 0;
  }