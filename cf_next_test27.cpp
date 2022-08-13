#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int  n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
      cin>>vec[i];
    }
    int j=0;
    while(j<n){

      if(vec[j] >0 && vec[j]<=n && vec[j]!=j+1) //vec[j]!=vec[j]
      {
        swap(vec[j],vec[vec[j]-1]);
        
      }
      else j++;
    }
    // cout<<"vec is now "<<endl;
    // for(auto x: vec){
    //   cout<<x<<" ";
    // }cout<<endl;
    for (int i = 0; i < n; i++)
    {
      if(vec[i]!=i+1){
      cout<<i+1<<endl;
      return 0;}
    }
    cout<<n+1<<endl;
    
    cout<<endl;
    return 0;
  }