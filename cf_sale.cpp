#include<bits/stdc++.h>
using namespace std;

int rec1(int i, int n,vector<int> &vec,int mw,vector<vector<int>> &memo ){
    if(i>=n){
        return 0;
    }
    if(memo[i][mw] !=-14329 ){
        return memo[i][mw];
    }

    int tk =0,ntk;

    if(mw>0) tk = -vec[i]+rec1(i+1,n,vec,mw-1,memo);
    ntk = rec1(i+1,n,vec,mw,memo);

    return memo[i][mw]=max(tk,ntk);
}
  
int main() 
{  
    int n,m;
    cin>>n>>m;
    vector<int> vec(n,0);
    vector<vector<int>> memo(n+1,vector<int> (m+1,-14329));
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    
    int res = rec1(0,n,vec,m,memo);
    // cout<<"the result is "<<res<<endl;
    cout<<res<<endl;
    cout<<endl;
    return 0;
  }

// 5 3
// -6 0 35 -2 4  