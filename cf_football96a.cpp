#include<bits/stdc++.h>
using namespace std;
bool solve(string &s,int n){

    string temp;
    for (int i = 0; i < n; i++)
    {
        if(temp.empty()){
            temp+=s[i];
        }
        else if(temp.size() >=7){
            return 1;
        }
        else if(*(--temp.end()) == s[i]){
            temp +=s[i];
        }
        else temp = s[i];
    }
    if(temp.size() >=7){
            return 1;
    }
    
return 0;
}
  
int main() 
{  
    string s;
    cin>>s;
    int n = s.size();
    if(solve(s,n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    cout<<endl;
    return 0;
  }