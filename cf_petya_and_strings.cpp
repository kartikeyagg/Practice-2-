#include<bits/stdc++.h>
using namespace std;

int solve(string &s, string &t){



    for (int i = 0; i < s.size(); i++)
    {   
        if(s[i]<91){
            s[i] +=32;
        }
        if(t[i]<91){
            t[i]+=32;
        }

        if(s[i]<t[i]){
            return -1;
        }
        else if(s[i]>t[i])
        {return 1;}
    }
    return 0;

}

  
int main() 
{  
    string a,b;
    cin>>a;cin>>b;
    int res = solve(a,b);
    cout<<res;
    cout<<endl;
    return 0;
  }