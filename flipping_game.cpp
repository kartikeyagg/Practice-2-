#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    
    int n;
    cin>>n;
    vector<int> vec(n,0);
    int res =0,count0 =0;
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
        res+=vec[i];
        if(vec[i] == 0) count0++;
    }
    
    // applying kadane's 
    if(count0 ==0){
        cout<<res-1<<endl;
        return 0;
    }
    int temp;
    int k=0;
    int maxsum =0;
    for (int i = 0; i < n; i++)
    {
        if(vec[i] == 0) temp =1;
        else temp = -1;

        k+=temp;
        k = max(k,0);
        maxsum = max(maxsum,k);
    }
    res+=maxsum;
    cout<<res<<endl;

    cout<<endl;
    return 0;
  }