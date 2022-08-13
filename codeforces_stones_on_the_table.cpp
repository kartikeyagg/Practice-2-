#include<bits/stdc++.h>
using namespace std;

long long solve(string &s ,int n){
    long long count =0;
    for (int i = 1; i < n; i++)
    {
        if(s[i] == s[i-1]){
            count++;
        }
    }
    
    return count;
}

int main() 
{  
    int n;
    string s;
    cin>>n;
    cin>>s;
    
    cout<<solve(s,n);
    
    cout<<endl;
    return 0;
  }