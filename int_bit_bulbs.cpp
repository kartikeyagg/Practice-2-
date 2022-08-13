#include<bits/stdc++.h>
using namespace std;
int bulbs(vector<int> &A) {
    
    int n = A.size();
    vector<int> vec;
    int sum =0;
    // cout<<"43434 \n";
    for (int i = n-1; i >=0; i--)
    {   
        sum+=A[i];
        vec.push_back(sum);
    }
    // cout<<"43434 \n";

    reverse(vec.begin(),vec.end());
    // cout<<"vec is "<<endl;
    // for(auto x:vec){
    //     cout<<x<<" ";
    // }cout<<endl;

    int flag =0;
    int m;
    int ans =0;
    for(int i =0 ;i< n;i++){

        m = n-i;

        // if(flag == 0 && vec[i]<m-i-vec[i]){
        if(flag == 0 && A[i] == 0){
            
            ans+=1;
            flag =1;

        }
        // else if(flag == 1 && vec[i]>m-i-vec[i]){
        else if(flag == 1 && A[i] == 1){

            ans+=1;
            flag =0;
        }
        


    }
    return ans;
    
}

  
int main() 
{  
    vector<int> A = {0,1,0,1};
    int res = bulbs(A);
    // cout<<"ans is "<<res<<endl;
    cout<<res;
    cout<<endl;
    return 0;
  }