#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    long long m,n;
    cin>>n>>m;
    vector<long long> vec(n,0);
    for (long long i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    vector<long long> dp;
    dp.push_back(0);
    long long s,et;
    long long ans;
    for (long long i = 1; i < n; i++)
    {
        s = vec[i];
        if(vec[i-1] > s){
            dp.push_back(dp[i-1]+vec[i-1]-s);
        }
        else{
            dp.push_back(dp[i-1]);
        }
    }
    
    // for(auto x: dp){
    //     cout<<x<<" ";
    // }cout<<endl;

    vector<long long> dp2;
    dp2.push_back(0);
    long long j =1;
    for(long long i = n-2;i>=0;i--){

        s = vec[i];
        if(vec[i+1]>s){
            dp2.push_back(dp2[j-1]+vec[i+1]-s);
        }
        else{
            dp2.push_back(dp2[j-1]);
        }
        j++;

    }
    reverse(dp2.begin(),dp2.end());
    // for(auto x: dp2){
    //     cout<<x<<" ";
    // }cout<<endl;
    
    for (long long i = 0; i < m; i++)
    {   
        
        cin>>s>>et;
        s-- ; et--;
        if(s > et){
            cout<<dp2[et] - dp2[s]<<endl;
        }
        else{
            cout<<dp[et]-dp[s];
            cout<<endl;
        }
    }
    

    cout<<endl;
    return 0;
  }
  /*
  stack<long long> st;
    // st.push(-1);
    vector<long long> dp(n,-1);
    long long temp;
    for (long long i = 0; i < n; i++)
    {
        while(!st.empty() && vec[st.top()]>=vec[i]){
            
            st.pop();
        }
        if(st.empty()){
            st.push(i);
            continue;
        }
        dp[i] = st.top();
        st.push(i);
    }
    vector<long long> dp2(n,-1);
    st = {};
    for (long long i = n-1; i >=0; i--)
    {
        while(!st.empty() && vec[st.top()]>=vec[i]){
            
            st.pop();
        }
        if(st.empty()){
            st.push(i);
            continue;
        }
        dp2[i] = st.top();
        st.push(i);
    }
    long long s,et;
    long long ans =0;
    */