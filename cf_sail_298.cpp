#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int t,sx,sy,ex,ey;
    cin>>t>>sx>>sy>>ex>>ey;
    int e = ex-sx;
    int n = ey-sy;
    char ec , nc;
    if(e>0){ec = 'E';}
    else ec = 'W';
    if(n>0){nc = 'N';}
    else nc ='S';
    e = abs(e);n = abs(n);
    char temp;int i;
    for (i = 0; i < t; i++)
    {   
        if(e==0 && n ==0){ cout<<i<<endl; return 0;}
        cin>>temp;
        if(temp == ec){e = max(e-1,0);}
        else if(temp == nc){n= max(n-1,0);}
          
    }
    if(e==0 && n ==0){ cout<<i<<endl; return 0;}
    
    cout<<"-1";
    
    cout<<endl;
    return 0;
  }