#include<bits/stdc++.h>
using namespace std;
#define ll long long  
int main() 
{  
    ll a,b;
    cin>>a>>b;
    ll t = a+b;
    ll t1 = t;
    string s1,s2,s3;
    while(a>0){
        if(a%10 != 0)
        s1+=to_string(a%10);
        a/=10;
    }
    while(b>0){
        if(b%10 != 0)
        s2+=to_string(b%10);
        b/=10;
    }
    while(t>0){
        if(t%10 != 0)
        s3+=to_string(t%10);
        t/=10;
    }
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    reverse(s3.begin(),s3.end());
    // cout<<"the strings are"<<endl;
    // cout<<s1<<endl;
    // cout<<s2<<endl;
    // cout<<s3<<endl;
    a = stoll(s1);


    b = stoll(s2);
    t= stoll(s3);
    if(a+b == t){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    cout<<endl;
    return 0;
  }