#include<bits/stdc++.h>
using namespace std;

int solve(int i,int j, string &s, string &t){

    while(i>=0 && j>=0)    {

        if(s[i] == t[j]){
            j--;
            i--;
        }
        else i--;

    }
    if(j<0){ return 1;}
    return 0;
}

int main() 
{  
    string t ="hello";
    string s;
    cin>>s;
    if(solve(s.size()-1,t.size()-1,s,t)) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
    return 0;
  }