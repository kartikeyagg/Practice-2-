#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    string s,t;

    cin>>s>>t;
    reverse(t.begin(),t.end());
    // cout<<"s and t are "<<s<<" "<<t<<endl;
    if(s.compare(t) ==0){

        cout<<"YES";

    }
    else cout<<"NO";
    
    cout<<endl;
    return 0;
  }