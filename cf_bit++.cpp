#include<bits/stdc++.h>
using namespace std;

int solve(int n){

    int res =0;string s;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        if(s[0]=='+'|| s[2] =='+'){
            res++;
        }
        else{
            res--;
        }
    }
    
    return res;
}

int main() 
{  
    int n;
    cin>>n;
    cout<<solve(n);
    cout<<endl;
    return 0;
  }