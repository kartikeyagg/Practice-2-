#include<bits/stdc++.h>
using namespace std;
// #include<bits/stdc++.h>
vector<int> findLIS(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size();int maxi = 0,last_index =0;
    vector<int> dp(n,1),hash(n+1,0);int res = 0;
    
    for(int i =0 ;i<n;i++){
        hash[i] = i;
        for(int j =0 ;j<i;j++){ //previous
            
            if(arr[i]>arr[j] && dp[i]<dp[j]+1){
//                 res++;
                dp[i]=dp[j]+1;
                hash[i] = j;
            }
        }
        if(dp[i]>maxi){
            maxi = dp[i];
            last_index = i;
//             res =1;
        }

    }
    return dp;
    
}
int longestBitonicSequence(vector<int>& arr, int n) {
	  // Write your code here.	
    vector<int> t1 = findLIS(arr);
    cout<<"size of t1 is "<<t1.size()<<endl;
    reverse(arr.begin(),arr.end());
    vector<int> t2 = findLIS(arr);
    reverse(t2.begin(),t2.end());
    int res = 1; n = t2.size();
    
    for(int i =0;i<n;i++){
        cout<<"t1 and t2 are "<<t1[i]<<" "<<t2[i]<<endl;
        res = max(res, t1[i]+t2[i]-1);
    }
    return res;
} 

  
int main() 
{  
    vector<int> arr = {2 ,1 ,3, 1};
    int res = longestBitonicSequence(arr,1);
    
    cout<<"result is "<<res<<endl;
    cout<<endl;
    return 0;
  }