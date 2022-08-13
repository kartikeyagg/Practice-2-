#include<bits/stdc++.h>
using namespace std;
int findNumberOfLIS(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size();int maxi = 0,last_index =0;
    vector<int> dp(n,1),hash(n+1,0);int res = 0;
    vector<int> count(vector<int> (n,1));
    int r1 = 0;
    
    for(int i =0 ;i<n;i++){
        hash[i] = i;
        for(int j =0 ;j<i;j++){ //previous
            
            if(arr[i]>arr[j] && dp[i]<dp[j]+1){
//                 res++;
                dp[i]=dp[j]+1;
                hash[i] = j;
                count[i]= 1;
            }
            else if (arr[i]>arr[j] && dp[i]==dp[j]+1){
                count[i] += count[j];
            }
        }
        if(dp[i]>maxi){
            maxi = dp[i];
            last_index = i;
//             res =1;
        }

        
    }
//     int maxt = *max_element()
    int mr = 0;
    // dp[1] = 4;
    for(int i = 0;i<n;i++){
        if(dp[i] == maxi){
            mr+=count[i];
        }
    }
    for(auto x:dp){
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto x:count){
        cout<<x<<" ";
    }
    cout<<endl;
    return mr;
    
}  
int main() 
{  
    // vector<int> tk = {1,3,5,4,7};
    vector<int> tk = {50, 3, 90, 60 ,80};
    // 50, 3, 90, 60 ,80
    int res = findNumberOfLIS(tk);
    cout<<"res is "<<res<<endl;
    cout<<endl;
    return 0;
  }