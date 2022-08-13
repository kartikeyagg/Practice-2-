#include<bits/stdc++.h>
using namespace std;

// bool predeces(int i,int prev,vector<string> &vec){
    
// }

int rec1(int i1, int i2 , string &s, string &t,vector<vector<int> > &memo){
    
    if(i1 <0 || i2< 0 ){
        return 0;
    }
    if(memo[i1][i2]!=-1){
        return memo[i1][i2];
    } 
    
    int res = 0;
    if(s[i1] == t[i2] ){
        res = 1+ rec1(i1-1,i2-1,s,t,memo);
    }
    else{
        res = max(rec1(i1,i2-1,s,t,memo),rec1(i1-1,i2,s,t,memo));
    }
    memo[i1][i2] = res;
    return res;
    
}

int lcs(string &s, string &t)
{
    //Write your code here
    vector<vector<int> > memo(s.size(),vector<int> (t.size()+1, -1) );
    return rec1(s.size()-1,t.size()-1,s,t,memo);
}
bool predeces(string &s,string &t){
    
    if(t.size() - lcs(s,t) !=0 ){
        return 0;
    }
    return 1;
    
}
bool cmp(string &a, string &b){
    return a.size()<b.size();
}

int longestStrChain(vector<string> &arr)
{
    // Write your code here.
    int n = arr.size();
    sort(arr.begin(),arr.end(),cmp);
    // cout<<"the array is \n";
    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    int j;
    int maxi = 1,last_index = 0;
    vector<int> hash(n+1,0),dp(n+1,1);
    for(int i = 0;i<n;i++){
        hash[i]  = i;
        for(int prev = 0;prev<i;prev++){
            j = prev;
            // cout<<"current strings are "<<arr[i]<<" "<<arr[j]<<endl;
            if(predeces(arr[i],arr[prev]))
            {
                // cout<<"pred1\n";
                if(dp[j]+1 > dp[i]){       
                dp[i]=dp[j]+1 ;
                hash[i] = j;
                }
            }
        }
        if(dp[i]>maxi){
            maxi = dp[i];
            last_index = i;
        }   
    }
    vector<string> temp;
    temp.push_back(arr[last_index]);
    while(last_index!=hash[last_index]){
        last_index = hash[last_index];
        
        temp.push_back(arr[last_index]);
        
    }
    return temp.size();
    
    
}
  
int main() 
{  
    // if(cout<<"fasf"){}

    vector<string> kt =  {"xx", "x", "y", "xyx" };
    cout<<"enter your choice "<<endl;
    int k;
    string p;
    int res ;
    cin>>k;
    if(k == 1){
    res = longestStrChain(kt);

    }
    else{
        cin>>k;
        kt.clear();
        for (int i = 0; i < k; i++)
        {
            cin>>p;
            kt.push_back(p);
        }
    res= longestStrChain(kt);

        
    }

    cout<<"res is "<<res<<endl;
    
    cout<<endl;
    return 0;
  }