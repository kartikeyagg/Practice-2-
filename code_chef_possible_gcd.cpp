#include<bits/stdc++.h>
using namespace std;
map<long long,int> mp;
long long factor_number(long long n){

    mp.clear();
    int flag =0;
    if(n ==1){
        return 1;
    }
    while (n % 2 == 0)
    {
        // cout << 2 << " ";
        if(mp.find(2) == mp.end()){
            mp[2] =1;
        }
        else{
            mp[2]++;
        }
        n = n/2;
    }
 

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {   
        flag =0;
        while (n % i == 0)
        {   
            // cout << i << " ";
            if(flag ==0){
                mp[i] =1;
                flag = 1;
            }
            else{
                mp[i]++;
            }
            n = n/i;
        }
    }
 
    if (n > 2)
        // cout << n << " ";
        mp[n] = 1;
    long long res =1;

    for(auto x:mp){
        res*= (x.second+1);
    }
    return res;
}

int main() 
{  
    int n;
    long long k,t;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>k>>t;
        cout<<factor_number(abs(t-k))<<endl;
    }
    cout<<endl;
    return 0;
  }

// 2
// 1 2
// 99999999999999999 99999999999999999
