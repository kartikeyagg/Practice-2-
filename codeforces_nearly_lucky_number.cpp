#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    string s;
    cin>>s;
    // if(s.size())
    int count1 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '4' || s[i] =='7' ){
            count1++;
        }
    }
    // cout<<"Count is "<<count1<<endl;
    if(count1 == 7 || count1==4){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    
    cout<<endl;
    return 0;
  }