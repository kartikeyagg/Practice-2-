#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    cin>>n;
    int inp;
    int maxl= 1;
    if(n>=2){
        maxl = 2;
    }
    int pr1=0,pr2=0;
    int k=2;

    cin>>pr2;
    if(n>=2) cin>>pr1;
    for (int i = 2; i < n; i++)
    {
        cin>>inp;
        // cout<<"inp is "<<inp<<endl;
        // cout<<"pr1 and pr2 are "<<pr1<<" "<<pr2<<endl;
        if(inp == pr1+pr2){
            k++;
            k = max(k,2);
            maxl = max(maxl,k);
        }
        else{
            k = 2;
        }
        // cout<<"Maxl is "<<maxl<<endl;
        pr2 = pr1;
        pr1 = inp;
    }
    cout<<maxl;
    
    cout<<endl;
    return 0;
  }