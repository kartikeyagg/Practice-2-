#include<bits/stdc++.h>
using namespace std;

long long  slow_motion(long long  a,long long  b,long long  c){

    
    long long  k,r;
    k = c/b;
    r = c%b;
    if(r != 0) k++;
    long long  res = 0;
    if(k>a){

        for (long long  i = 0; i < a; i++)
        {
            res += b*b;
        }
        
    return res;
    }
    if(r ==0){
        for(long long  i =0;i<k;i++){

        res += b*b;

    }
    return res;

    }

    for(long long  i =0;i<k-1;i++){

    res += b*b;

    }
    res+= r*r;
    
    return res;

}

int main() 
{  
    long long  k,a,b,c;
    // long long fads = 10/3;
    // cout<<fads<<endl;
    cin>>k;
    for (long long  i = 0; i < k; i++)
    {   
        cin>>a>>b>>c;
        c = slow_motion(a,b,c);
        cout<<c<<endl;
        
    }
    
    
    cout<<endl;
    return 0;
  }