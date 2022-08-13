#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    cin>>n;
    string a,b,k;
    int c1=0,c2=0;
    cin>>a;
    c1++;
    for (int i = 1; i < n; i++)
    {
        cin>>k;
        if(a.compare(k) == 0){
            c1++;
        }
        else{
            c2++;
            if(b.size() == 0) { b= k;}
        }
    }
    if(c1>c2){
        cout<<a<<endl;
    }
    else cout<<b<<endl;
    
    // cout<<endl;
    return 0;
  }