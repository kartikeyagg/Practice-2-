#include<bits/stdc++.h>
using namespace std;
#define mod 1073741824  
#define ll  long long
ll findndivisor(ll n){
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;
 
            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;

}
int main() 
{  
    int a,b,c;
    cin>>a>>b>>c;
    long long sum1 =0;
    map<int,int> mp;
    for (int i = 1; i <=a; i++)
    {
        for (int j = 1; j <=b; j++)
        {
            for (int k = 1; k <=c; k++)
            {   
                if(mp.find((i*j*k)%mod) != mp.end()){
                    sum1+=mp[i*j*k];
                    sum1 = sum1%mod;

                }
                else{
                    // sum1+=(findndivisor((i*j*k)%mod)%mod);
                    sum1 = sum1%mod;
                    mp[((i*j*k)%mod)] = (findndivisor((i*j*k)%mod)%mod);
                    sum1+=mp[((i*j*k)%mod)];
                    }
            }
            
        }
        
    }
    cout<<sum1%mod<<endl;
    
    
    cout<<endl;
    return 0;
  }