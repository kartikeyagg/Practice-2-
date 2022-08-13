#include<bits/stdc++.h>
using namespace std;
  
int main() 
{   

    string a,b;
    cin>>a>>b;
    int n = a.size();
    for(int i =0;i<n;i++){
        a[i] = (a[i]-'0')^(b[i]-'0');
        a[i]+='0';

    }
    cout<<a<<endl;
    
    cout<<endl;
    return 0;
  }