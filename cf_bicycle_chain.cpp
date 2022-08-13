#include<bits/stdc++.h>
using namespace std;

int helper(vector<int> &vec,int n, vector<int> &arr , int m,int g){
    
    int i =0;
    int j= m-1;
    int res =1;
    int t,ind = n-1;
    int count =0;
    while(j>=0){
        i=0;
        while(i<=ind && i<=arr[j]){

            if(arr[j]%vec[i] ==0){
                // res = max(res,arr[j]/vec[i]);
                t  = arr[j]/vec[i];
                if(t>res){
                    res =t;
                    ind = i;
                }
                if(t == g){
                    count++;
                }
                break;
            }

        i++;}
        j--;
    }
    return count;


}

int solve(vector<int> &vec,int n, vector<int> &arr , int m){

    int i =0;
    int j= m-1;
    int res =1;
    int t,ind = n-1;
    while(j>=0){
        i=0;
        while(i<=ind && i<=arr[j]){

            if(arr[j]%vec[i] ==0){
                // res = max(res,arr[j]/vec[i]);
                t  = arr[j]/vec[i];
                if(t>res){
                    res =t;
                    ind = i;
                }
                break;
            }

        i++;}
        j--;
    }
    return res;
}
  
int main() 
{  
    int n,m;
    cin>>n;
    int k,t;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {   
        cin>>k;
        vec.push_back(k);
    }
    cin>>m;
    vector<int> arr;
    for (int i = 0; i < m; i++)
    {
        cin>>k;
        arr.push_back(k);
    }
    int res  = solve(vec,n,arr,m);
    // cout<<"res is "<<res<<endl;
    cout<<helper(vec,n,arr,m,res)<<endl;
    
    cout<<endl;
    return 0;
  }


// 3
// 2 3 4
// 4
// 10 11 12 13 
