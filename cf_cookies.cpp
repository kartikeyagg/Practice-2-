#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n,inp;
    cin>>n;
    int sum=0;
    int odd_nums =0;
    for (int i = 0; i < n; i++)
    {
        cin>>inp;
        sum+=inp;
        if(inp%2 == 1){
            odd_nums++;
        }
    }

    if(sum%2 ==1){
        cout<<odd_nums;
    }
    else cout<<n-odd_nums<<endl;
    
    cout<<endl;
    return 0;
  }