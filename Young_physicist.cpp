#include<bits/stdc++.h>
using namespace std;


  
int main() 
{  
    int n =0,k;
    cin>>n;
    vector<int> vec(3,0);

    for(int j =0;j<n;j++){
    for (int i = 0; i < 3; i++)
    {   
        cin>>k;
        vec[i]+=k;    
    }}

    for(auto x:vec){
        if(x!=0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    
    // cout<<endl;

    return 0;
  }