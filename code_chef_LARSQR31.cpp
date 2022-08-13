#include<bits/stdc++.h>
using namespace std;

int largest_square(vector<int> & vec,int k,int c){ //vector<int> &curr

    // vec is the up array
    // cout<<"previous is "<<endl;
    // for(auto x: vec){
    //     cout<<x<<" ";
    // }cout<<endl;
    int t;
    int prev = 1;
    int ans = 0;
    for (int i = k+1; i <= c; i++)
    {
        // t = 1e7;
        t = min(vec[i],vec[i-1]);
        t = min(prev,t);
        vec[i-1] = prev;
        prev = 1+t;
        // vec[i] = prev; //ulfat
        
        ans = max(ans,t+1);

    }
    vec[k] = 1;
    vec[c] = prev;
    for (int i = 0; i < k; i++)
    {
        vec[i] = 0;
    }
    for (int i = c+1; i < vec.size(); i++)
    {
        vec[i] = 0;
    }
    
    
    
return ans;
}


int main() 
{  
    int n;
    cin>>n;
    int k,c;
    cin>>k>>c;
    vector<int> vec(n,0);

    for (int i = k; i <= c; i++)
    {
        vec[i] = 1;
    }
    int res =0 ;
    int prevk = k,prevc = c;
    for (int i = 0; i < n-1; i++)
    {
        cin>>k>>c;
        res  = max(res,largest_square(vec,k,c));
        prevk =k;
        prevc = c;
    }
    
    cout<<"answer is "<<res;
    cout<<endl;
    return 0;
  }
