#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{  
    int n;
    cin>>n;
    int k;
    // vector<ll> vec;
    ll temp;
    ll sum1=0;
    for (int i = 0; i < n; i++)
    {   
        // vec.clear();
        sum1 =0;
        cin>>k;
        for (int j = 0; j < k; j++)
        {
            cin>>temp;
            // vec.push_back(temp);
            sum1+=(temp-1);
        }
        if(sum1%2 == 0){
            cout<<"CHEFINA"<<endl;
        }
        else{
            cout<<"CHEF"<<endl;
        }
        
    }
    
    
    cout<<endl;
    return 0;
  }