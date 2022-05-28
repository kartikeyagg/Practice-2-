#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

// find the ind of the element greater than equal to given num;
int binsearch(vector<int> &a, int val){

    int n = a.size();
    int high = n-1,low =0, mid;
    
    while(high -low >1){
        mid = (high+low)/2;
        if(a[mid] >= val){
            high  =mid;
        }
        else{
            low = mid+1;
        }
    }
    if(a[low]>= val){return low;}
    if(a[high]>= val){return high;}

    return -1;

}

int solve(vector<int> &a){

    int tk =0;
    long long ans =0;
    int n = a.size();
    if(n<3)return 0;
    sort(a.begin(),a.end());
    for (int i = 0; i < n -1; i++)
    {   if(a[i] ==0)continue;
        for (int j = i+1; j <n ; j++)
        {  if(a[j] ==0)continue;
            tk = binsearch(a,a[i]+a[j]);
            if(tk != -1){
                ans+=(tk -j -1)%mod;
            }
            else{
                ans+=(n-j-1)%mod;
            }
            ans = ans%mod;
        }
        
    }
return ans;    
}
  
int main() 
{  
    // vector<int> a = {3,4,7,6};
    vector<int> a = {10, 21, 22, 100, 101, 200, 300};
    // vector<int> a = {0,1};
    int res = solve(a);

    cout<<"res is "<<res<<endl;
    
    cout<<endl;
    return 0;
  }