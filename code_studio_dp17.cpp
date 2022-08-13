#include<bits/stdc++.h>
using namespace std;

// set<pair<int,int>> st; // contains all the elements which are false
map<pair<int,int> , int> mp;
int nc = 0;
int rec1(int i, vector<int> &arr,int target,vector<vector<int>> &vec1 ){
    

    cout<<"for i = "<<i<<" and target = "<<target<<endl;
    if(target == 0){
        cout<<"1fds"<<endl;
        return 1;
    }
    if(target< 0){
        cout<<"2fds"<<endl;

        return 0;
    }

    if(i>=0 && vec1[target][i] != -11){ //means answer is present
        cout<<"3fds"<<endl;
        
        return vec1[target][i];
    }
//     if(i >= nc){
//         return 0;
//     }
    int res =0 ;
    for(int j = i+1;j<nc;j++){
        
        res += rec1(j,arr,target-arr[j],vec1);
//         if(rec1(j,arr,target-arr[j])){
//             return 1;
//         }
    }
//     mp.insert({target,i});
//     mp[{target,i}] = res;
    cout<<"kjesd 1 \n";
    cout<<" encaputlating target = "<<target<<" i="<<i<<endl;
    if(i != -1)
    vec1[target][i] = res;
    return res;
    
}
int findWays(vector<int> &num, int tar)
{
    // Write your code here.
//     vector<vector<vector<int>>> vec(vector<vector<int> ())
    nc = num.size();
    vector<vector<int>> vec1(tar+1,vector<int> (nc+1 , -11));
    // mp.clear();
    int res1 = rec1(-1,num,tar,vec1);
    for(auto x: vec1){
        for(auto y: x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    cout<<" res is "<<res1<<endl;


    return res1;
}  
// 4 3
// 1 2 2 3
int main() 
{  
    
    // int target = 3;

    // vector<int> tk = {1, 2, 2, 3};
        
    int target = 1;

    vector<int> tk = {0,0,1};
    // 001,01(index 2 and 0),1,01(index 2 and 1)

    int res = findWays(tk, target);

    cout<<"the result is "<<res<<endl;  
    
    cout<<endl;
    return 0;
  }