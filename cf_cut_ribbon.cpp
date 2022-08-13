#include<bits/stdc++.h>
using namespace std;

int rec1(int n, vector<int> &vec,vector<int> &memo){

    // cout<<"for n="<<n<<endl;
    if(n==0){
        return 0;
    }
    if(n<0){
        return -1e7;
    }
    if( memo[n] != -1){
        return memo[n];
    }
    int res =-1e7;
    for(auto x: vec){

        
        res = max(res, 1+rec1(n-x,vec,memo));
        

    }
    // cout<<"n="<<n<<" returning "<<res<<endl;
    return memo[n] =res;
}
  
int main() 
{  
    
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int> vec = {a,b,c};
    vector<int> memo(n+1,-1);
    int res = rec1(n,vec,memo);
    cout<<res;
    cout<<endl;
    return 0;
  }