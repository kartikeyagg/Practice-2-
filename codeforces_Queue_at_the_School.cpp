#include<bits/stdc++.h>
using namespace std;

void solve(string &s, int t,int n){

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(s[j] == 'B' && s[j+1] =='G'){

                swap(s[j],s[j+1]);
                j++;

            }
        }
        
    }
    return ;

}

int main() 
{  
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    solve(s,t,n);
    cout<<s<<endl;
    
    cout<<endl;
    return 0;
  }