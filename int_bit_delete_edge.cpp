#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


ll rec1(vector<int> &ans,vector<vector<int> > &g,vector<int> &A,int i,vector<int> &visited){
    
    if(visited[i] == 1){
        
        return 0;

    }
    visited[i] = 1;
    for(auto x: g[i]){
        
        ans[i] += rec1(ans,g,A,x,visited);
        
    }
    
    
    ans[i]+=A[i];
    
    return ans[i];
    
    
}
// ll dfs(vector<vector<int>> & g,int i,vector<int> &visited){

//     if(visited[i] == 1){
//         return 0;
//     }
//     visited[i] = 1;
//     ll max1 =0;
//     for(auto x: g[i]){
//         max1 = max(max1,)
//     }

// }

int deleteEdge(vector<int> &A, vector<vector<int> > &B) {
    
    int n = A.size();
    int nb = B.size();
    vector<int> vec(n);
    
    vector<vector<int>> g(n,vector<int>(0));
    for(int i =0;i<nb;i++){
        B[i][0]--;
        B[i][1]--;
    }
    
    for(int i =0;i<nb;i++){
        
        g[B[i][0]].push_back(B[i][1]);
        g[B[i][1]].push_back(B[i][0]);
        
    }
    cout<<"g is "<<endl;
    for(auto x: g){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    cout<<"###########"<<endl;
    vector<int> ans(n,0);
    vector<int> visited(n,0);
    
    ll res = rec1(ans,g,A,0,visited);

    cout<<"the sum matrix is "<<endl;
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
    ll maxl =0;
    for(auto x:ans){
        maxl = max(maxl, (res-x)*x );
    }
    return maxl;
    
}

  
int main() 
{  
    
    // vector<int> A = {10, 5, 12, 6};
    vector<int> A = {11,12};
    // vector<vector<int>> B = { {1, 2},
    //     {1, 4},
    //     {4, 3}};
    vector<vector<int>> B = {
        {1,2}
    };

    ll res = deleteEdge(A,B);

    cout<<"answer is "<<res<<endl;
    
    cout<<endl;
    return 0;
  }