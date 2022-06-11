#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n,k;
    cin>>n;
    int t,p;
    for (int i = 0; i < n; i++)
    {

      cin>>k;
      // cout<<"#\n";
      t = (k/2)+1;
      p = k/2;
      if(k%2 ==1){
        cout<<t<<" ";
        t++;
      }
      while (t<=k && p>0)
      {
        cout<<p<<" "<<t<<" ";
        p--;
        t++;
      }
      if(t == k){
        cout<<t<<" ";
      }
      
      cout<<endl;
    }
    
    // cout<<endl;
    return 0;
  }