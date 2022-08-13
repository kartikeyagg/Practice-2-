#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll tab1(vector<vector<int> > &vin){
    int nr = vin.size(), nc = vin[0].size();
    int ls,me,rs;
    vector<vector<int> > dp(nr,vector<int> (nc,-10e7));
    cout<<"fadsf \n";
    int res = -1e8;
    cout<<"fadsf \n";

    for (int i = 0; i < nc; i++)
    {
        dp[0][i] = vin[0][i];
    }

    for (int i = 1; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {    
            cout<<"for i="<<i<<" and j="<<j<<endl;
            res = -1e8;
            if( j>0){
                ls = dp[i-1][j-1] + vin[i][j];
                res = max(ls,res);
            }
            if(j < nc -1){
                rs = dp[i-1][j+1]+vin[i][j];
                res = max(rs,res);
            }
            me = dp[i-1][j] +vin[i][j];
            res =  max(res,me);
            dp[i][j] = res;
            // return res;

        }
        
    }
    cout<<" the dp array is \n";

    for(auto x: dp){
        for(auto y: x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    
    return *max_element(dp[nr-1].begin(),dp[nr-1].end());

}

int main() 
{  
    int r,c;
    cin>>r>>c;

    vector<vector<int> >vin(r,vector<int>(c));

    // just for testing purpose of another programe 
    //##
    // int nr = r,nc = c;
    // vector<vector<vector<int> >> memo(nr,vector<vector<int>> (nc,vector<int> (nc,-1)));
    // cout<<"fadsf \n";
    // return 0;
    // ##
    int ele;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>ele;
            vin[i][j] = ele;
        }
        
    }
    //  long long res = getMaxPathSum(vin);
    ll res = tab1(vin);

    cout<<"the result is "<<res<<endl;
    
    
    cout<<endl;
    return 0;
  }