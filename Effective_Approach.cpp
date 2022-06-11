#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    long long n,k;
    map<long long,long long> mp;

    cin>>n;
    // vector<long long> vi;
    long long vi[n];

    for (long long i = 0; i < n; i++)
    {
        cin>>k;
        vi[i] = k;
        // vi.push_back(k);
    }

    long long q,l(0),r(0);
    cin>>q;

    for (long long i = 0; i < q; i++)
    {   
        cin>>k;
        if(mp.find(k)!=mp.end())
        {
            mp[k]++;
        }
        else{
            mp[k] = 1;
        }
    }
    // for(auto x: mp){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    for (long long i = 0; i < n; i++)
    {
        if(mp.find(vi[i])!=mp.end()){
            k = mp[vi[i]];
            l += (i+1)*k;
            r += (n-i)*k;
            // mp[vi[i]]--;
            mp.erase(vi[i]);
      
        }

    }
    
    cout<<l<<" "<<r;
    // cout<<endl;
    return 0;
  }