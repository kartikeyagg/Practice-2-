#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    string s,t;
    cin>>s;
    cin>>t;
    int n = s.size();
    if(s.size()!=t.size()) {cout<<"NO"<<endl;return 0;}
    int flag =0;
    char a,b;
    for (int i = 0; i <n ; i++)
    {
        if(s[i]!=t[i]){
            if(flag ==0){
                flag = 1;
                a = s[i];b = t[i];
            }
            else if(flag ==1){
                if(a == t[i] && b == s[i]){
                    flag++;
                }
                else {cout<<"NO"<<endl; return 0;}
            }
            else{
                {cout<<"NO"<<endl; return 0;}
                }
        }
    }
    if(flag == 2){cout<<"YES\n";return 0;}
    cout<<"NO";
    cout<<endl;
    return 0;
  }