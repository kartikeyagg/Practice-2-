#include<bits/stdc++.h>
using namespace std;
int nc = 0;
map<pair<int,int>, int> mp;

int rec1(int i, int target, vector<int> &arr){
    // cout<<"for target="<<target<<" i="<<i<<endl;
    if(i == nc){ // base case
        if(target ==0 ){
            return 1;
        }
        return  0;
    }
//     if(target>=0){
    if(mp.find({target,i})!=mp.end()){ //found
        return mp[{target,i}];
    }
//     }
    int plus1, minus1;
    int kt;
    minus1 = rec1(i+1,target+arr[i],arr);
    plus1 = rec1(i+1,target-arr[i] ,arr);
    
    kt = minus1+plus1;
//     if (target>=0) memo[target][i] = kt;
    // cout<<"12v for target="<<target<<" i="<<i<<endl;
    // cout<<"res is "<<kt<<endl;
    mp[{target,i}] = kt;
    return kt;
    
}

int targetSum(int n, int target, vector<int>& arr) {
    // Write your code here.
    mp.clear();
    nc = n;
    // vector<vector<int>> memo(target+1,vector<int> (nc,-1));
    int res1 = rec1(0,target,arr);
    return res1;
}
int main() 
{  
    // 4 3
    // 1 2 3 1
    vector<int> vec = {1, 2, 3, 1};
    int res1 = targetSum(4,3,vec);
    cout<<"the result is "<<res1;
    cout<<endl;
    return 0;
  }